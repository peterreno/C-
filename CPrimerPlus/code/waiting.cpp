#include <iostream>
#include <ctime>

int main()
{
	using namespace std;

	cout<< "Enter the dlay time , in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	cout << "staring\a\n";
	clock_t start = clock();
	while(clock() - start < delay);
	cout <<"done \a\n";
	return 0;
}
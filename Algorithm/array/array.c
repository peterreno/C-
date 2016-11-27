#include <iostream>

using namespace std;

void bunbbleSort(int arr[], int length) 
{
	for(int i = 0; i <length; i++) 
	{
		for(int j = 0; j < length - i - 1; ++j) {
			if(arr[j] < arr[j+1]) 
			{
				int temp = arr[j + 1];
				arr[j+1]  = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void insertionSort(int arr[], int length)
{
	for (int j = 0; j < length; ++j)
	{
		int key = arr[j];
		int i = j - 1;
		cout<<"insertionSort  key:"<<key<<endl;
		cout<<"insertionSort  out i:"<<i<<endl;
		cout<<"insertionSort out j:"<<j<<endl;
		cout<<"insertionSort out arr[i]:"<<arr[i]<<endl;
		cout<<endl;
		while(i >= 0 && arr[i] > key)
		{
			cout<<"insertionSort  in i:"<<i<<endl;
			cout<<"insertionSort in j:"<<j<<endl;
			arr[i + 1] = arr[i];
			cout<<"insertionSort in arr[i]:"<<arr[i]<<endl;
			cout<<"insertionSort in arr[i+1]:"<<arr[i+1]<<endl;
		    cout<<endl;

			i--;
		}
		arr[i + 1] = key;
		cout<<"insertionSort finish arr[i+1]:"<<arr[i+1]<<endl;
		cout<<endl;
		for(int i = 0; i < length; i ++) {
		   cout<<"arr["<<i<<"]:"<<arr[i]<<endl;
		}
		cout<<endl;
	}
}
void Merge(int arr[], int low, int mid, int high) 
{
	cout<<"Merge low:"<<low<<endl;
	cout<<"Merge mid:"<<mid<<endl;
	cout<<"Merge high:"<<high<<endl;
	cout<<endl;
	int n1 = mid - low +1;
	int n2 = high - mid;
	int left[n1], right[2];
	for(int i = 0; i < n1; i++)
		left[i] = arr[low + i];
	for(int i = 0; i < n2; i++) 
		right[i] = arr[mid + i + 1];
	int i = 0, j = 0, k = low;
	while(i < n1 && j < n2) 
	{
		if(left[i] < right[j])
			arr[k++] = left[i++];
		else 
			arr[k++] = right[j++];
	}
	while(i < n1)
		arr[k++] = left[i++];
	while(j < n2)
		arr[k++] = right[j++];
}
void MergeSort(int arr[], int low, int high)
{
	if(low < high) 
	{
		int mid = (low + high) / 2;
		cout<<"MergeSort low:"<<low<<endl;
		cout<<"MergeSort mid:"<<mid<<endl;
		cout<<"MergeSort high:"<<high<<endl;
		cout<<endl;
		MergeSort(arr, low, mid);
		MergeSort(arr, mid + 1, high);

		Merge(arr, low, mid, high);
	    for(int i = 0; i < high; i ++) {
			cout<<"MergeSort arr["<<i<<"]:"<<arr[i]<<endl;
		}
		cout<<endl;
	}
}

void QuickSort(int arr[], int low, int high)
{
	if(low < high) 
	{
		int key = arr[low];
		int l = low, h = high;
		cout<<"QuickSort l:"<<l<<endl;
		cout<<"QuickSort h:"<<h<<endl;
		cout<<"QuickSort key:"<<key<<endl;
		cout<<endl;
		while(l < h) {
			while(arr[l] < key) l++;
			while(arr[h] >= key) h--;
			if(h > l) 
			{
				int temp = arr[l];
				arr[l] = arr[h];
				arr[h] = temp;
			}
			for(int i = 0; i < high+1; i ++) {
				cout<<"QuickSort arr["<<i<<"]:"<<arr[i]<<endl;
			}
			cout<<endl;
			QuickSort(arr, low, l-1);
			QuickSort(arr, l + 1, high);
		}
	}
}
int main() 
{
	int a[] = {7, 2, 4, 6, 3, 8, 4};
	int length =  sizeof(a)/sizeof(int);
	cout<<"a size:"<<length<<endl;
	//bunbbleSort(a, length);
	//insertionSort(a, length);
	//MergeSort(a, 0,  length-1);
	QuickSort(a, 0, length-1);
	for(int i = 0; i < length; i ++) {
		cout<<"a["<<i<<"]:"<<a[i]<<endl;
	}
	return 0;
}


//http://blog.sina.com.cn/s/blog_676a011e0100ty5o.html
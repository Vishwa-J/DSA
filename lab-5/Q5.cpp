//To implement Merge sort algorithm
#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
	int subArr1 = mid - left + 1;
	int subArr2 = right - mid;
	int *leftArr = new int[subArr1], *rightArr = new int[subArr2];

	for (int i = 0; i < subArr1; i++)
		{leftArr[i] = arr[left + i];}
	for (int j = 0; j < subArr2; j++)
		{rightArr[j] = arr[mid + 1 + j];}

	int indexOfSub1= 0, indexOfSub2 = 0, indexOfMerge = left; 

	while (indexOfSub1 < subArr1 && indexOfSub2 < subArr2)
	{
		if (leftArr[indexOfSub1] <= rightArr[indexOfSub2]) 
		{
			arr[indexOfMerge] = leftArr[indexOfSub1];
			indexOfSub1++;
		}
		else {
			arr[indexOfMerge] = rightArr[indexOfSub2];
			indexOfSub2++;
		}
		indexOfMerge++;
	}
	
	while (indexOfSub1 < subArr1) {
		arr[indexOfMerge] = leftArr[indexOfSub1];
		indexOfSub1++;
		indexOfMerge++;
	}
	
	while (indexOfSub2 < subArr2) {
		arr[indexOfMerge] = rightArr[indexOfSub2];
		indexOfSub2++;
		indexOfMerge++;
	}
	delete[] leftArr;
	delete[] rightArr;
}


void mergeSort(int array[], int low, int high)
{
	if (low >= high)
		return; 
	int mid = low + (high - low) / 2;
	mergeSort(array, low, mid);
	mergeSort(array, mid + 1, high);
	merge(array, low, mid, high);
}

void printArray(int arr[], int n)
{
	for (auto i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[] = {87, 65, 45, 2, 10, 459, 56, 23, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	mergeSort(arr, 0, n - 1);
	cout << "Sorted array is "<<endl;
	printArray(arr, n);
	return 0;
}
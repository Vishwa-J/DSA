// To implement selection sort
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
	int i, j, min;
	for (i = 0; i < n-1; i++)
	{	
		min = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min])
			min = j;
		if(min!=i)
			swap(arr[min], arr[i]);
	}
    int k;
	for (k=0; k < n; k++)
		cout << arr[k] << " ";
}
int main()
{
	int arr[] = {100, 14, 59, 76, 5, 47, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Sorted array: ";
	selectionSort(arr, n);
	return 0;
}
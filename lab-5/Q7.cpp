// To implement quicksort using any random element as a pivot
#include <bits/stdc++.h>
using namespace std;
 
// Partition using Hoare's Partitioning scheme
int partition(int a[], int low, int high)
{   int r = 1+ (rand() % high);
    int pivot = a[r];
    int i = low - 1;
    int j = high + 1;
    while (1)
    {
        do {
            i++;
        } while (a[i] < pivot);
 
        do {
            j--;
        } while (a[j] > pivot);
 
        if (i >= j) {
            return j;
        }
        swap(a[i], a[j]);
    }
}
void quicksort(int a[], int low, int high)
{	
if (low >= high) 
    return;
int pivot = partition(a, low, high);
quicksort(a, low, pivot);
quicksort(a, pivot + 1, high);
}

void printArr(int a[], int n){
    for (int k = 0; k < n; k++)
		cout <<" "<< a[k];
}
 
int main()
{
    int arr[] = {25, 48, 99, 5, 36, 49};
	int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);
	cout<<"Sorted array: "<<endl;
	printArr(arr, n);
    return 0;
}

// To compare best cases and worst case in insertion sort and selection sort
#include <bits/stdc++.h>
using namespace std;

void insertionLinSort(int a[], int n){
	int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = a[i]; 
        j = i - 1; 
        while (j >= 0 && a[j] > key)
        { 
            a[j + 1] = a[j]; 
            j = j - 1; 
        } 
        a[j + 1] = key; 
    } 
}

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
}

void printArr(int a[], int n){
    for (int k = 0; k < n; k++)
		cout <<" "<< a[k];
}

int main(){
    // Best case is the sorted array
    int arr1[] = {10, 20, 30, 40, 50, 60};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    // Worst case is the array in the descending order
    int arr2[]= {60, 50, 40, 30, 20, 10};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Best case
    cout <<"Sorted array using insertion sort for best case: "<<endl;
	auto start1 = chrono::steady_clock::now();
    insertionLinSort(arr1, n1);
	auto stop1 = chrono::steady_clock::now();
	auto diff1 = stop1 - start1;
    printArr(arr1,n1);
	cout<<endl;
	cout<<"Time taken: ";
	cout << chrono::duration <double, milli> (diff1).count() << " ms" << endl;
	cout<<endl;

    cout <<"Sorted array using selection sort for best case: "<<endl;
	auto start2 = chrono::steady_clock::now();
    selectionSort(arr1, n1);
	auto stop2 = chrono::steady_clock::now();
	auto diff2 = stop2 - start2;
    printArr(arr1,n1);
	cout<<endl;
	cout<<"Time taken: ";
	cout << chrono::duration <double, milli> (diff2).count() << " ms" << endl;
	cout<<endl;


    // Worst case
    cout <<"Sorted array using insertion sort for worst case: "<<endl;
	auto start3 = chrono::steady_clock::now();
    insertionLinSort(arr2, n2);
	auto stop3 = chrono::steady_clock::now();
	auto diff3 = stop3 - start3;
    printArr(arr2,n2);
	cout<<endl;
	cout<<"Time taken: ";
	cout << chrono::duration <double, milli> (diff3).count() << " ms" << endl;
	cout<<endl;

    cout <<"Sorted array using selection sort for worst case: "<<endl;
	auto start4 = chrono::steady_clock::now();
    selectionSort(arr2, n2);
	auto stop4 = chrono::steady_clock::now();
	auto diff4 = stop4 - start4;
    printArr(arr2,n2);
	cout<<endl;
	cout<<"Time taken: ";
	cout << chrono::duration <double, milli> (diff4).count() << " ms" << endl;
	cout<<endl;

}
// Output
/*
Sorted array using insertion sort for best case: 
 10 20 30 40 50 60
Time taken: 0.0003 ms

Sorted array using selection sort for best case:
 10 20 30 40 50 60
Time taken: 0.0005 ms

Sorted array using insertion sort for worst case:
 10 20 30 40 50 60
Time taken: 0.0006 ms

Sorted array using selection sort for worst case:
 10 20 30 40 50 60
Time taken: 0.0005 ms
*/
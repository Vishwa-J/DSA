// To implement insetion sort using binary search and linear insertion sort algorithm and compare it
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int item, int low, int high)
{
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (item == a[mid])
			return mid + 1;
		else if (item > a[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}

	return low;
}


void insertionBinSort(int a[], int n)
{
	int i, loc, j, k, slctd;

	for (i = 1; i < n; ++i) {
		j = i - 1;
		slctd = a[i];

		loc = binarySearch(a, slctd, 0, j);

		while (j >= loc) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = slctd;
	}
}
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
void printArr(int a[], int n){
    for (int k = 0; k < n; k++)
		cout <<" "<< a[k];
}
int main()
{
	int a[] = { 37, 23, 0, 17, 12, 72, 31, 46, 100, 88, 54 };
	int n = sizeof(a) / sizeof(a[0]), i;


    cout <<"Sorted array using binary insertion sort: "<<endl;
	auto start = chrono::steady_clock::now();
    insertionBinSort(a, n);
	auto stop = chrono::steady_clock::now();
	auto diff = stop - start;

	printArr(a,n);
	cout<<endl;
	cout<<"Time taken: ";
	cout << chrono::duration <double, milli> (diff).count() << " ms" << endl;
	cout<<endl;
	// The time taken in the binary insertion sort came out to be 0.023 ms.

	cout<<"Sorted array using linear insertion sort: "<<endl;
	auto start1 = chrono::steady_clock::now();
	insertionLinSort(a, n);
	auto stop1 = chrono::steady_clock::now();
	auto diff1 = stop1 - start1;

	printArr(a, n);
	cout<<endl;
	cout<<"Time taken: ";
	cout << chrono::duration <double, milli> (diff1).count() << " ms" << endl;
	// The time taken in the linear insertion sort came out to be 0.0003 ms.

	// So in this case linear insertion sort took less time than binary.

	return 0;
}


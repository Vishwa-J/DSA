// to implement bubble sort using an array
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
int i, j, loc;

for (i = 0; i < n-1; i++)
{
	loc=-1;
	for (j = 0; j < n-i-1; j++)
	{
		if (arr[j] > arr[j+1])
		{
		swap(arr[j], arr[j+1]);
		loc=1;
		}
	}
    
	if (loc==-1)
		break;
}
    int k;
	for (k = 0; k < n; k++)
		cout <<" "<< arr[k];
}
int main()
{
	int arr[] = {5,8,78,96,45,74,25,44};
	int N = sizeof(arr)/sizeof(arr[0]);
    cout <<"Sorted array:";
	bubbleSort(arr, N);
	return 0;
}

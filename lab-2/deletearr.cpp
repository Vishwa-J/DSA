// Question-3 Delete element in an array
#include<bits/stdc++.h>
using namespace std;

int* delatind(int arr[], int pos, int n)
{
    n--;
    
    for(int i=pos-1; i<n; i++)
    {
        arr[i] = arr[i+1];
    }
}

int main()
{
    int arr[] = {54,78,69,55};
    int pos = 3;
    int n = 4;

    delatind(arr,2,4);
    
    for(int i=0; i<3; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
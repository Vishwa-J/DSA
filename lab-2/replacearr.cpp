// Question-9 Replace element in an array
#include<bits/stdc++.h>
using namespace std;

int replatind(int array[], int pos, int n, int size)
{
    if(pos>size)
    {
        return -1;
    }
    
    array[pos-1] = n;
}

int main()
{
    int arr[] = {5,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = replatind(arr, 1, 6, size);

    if(x==-1) {
        cout << -1 << endl;
        }
    else
    {
        for(int i=0; i<size; i++)
        {
            cout << arr[i] << " ";
        }
    }
 
    return 0;
}
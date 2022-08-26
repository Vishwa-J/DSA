// Question-5 Insert element in the beginning
#include<bits/stdc++.h>
using namespace std;
int* insatbeg(int arr[], int n,int size){
    size++;
    for (int i = size-1; i >=1; i--)
    {
        /* code */
        arr[i]=arr[i-1];
    }
    arr[0]=n;
    
}
int main(){
    int arr[]={5,8,96,47,12,54};
    int f=sizeof(arr)/sizeof(arr[0]);
    insatbeg(arr,78,f);
    for(int i=0; i<f; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
// Question-4  Insert element at the end of an array
#include<bits/stdc++.h>
using namespace std;
int* insatend(int arr[],int n,int size){

        size++;
        arr[size-1]=n;
    return arr;

}
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int y=sizeof(arr)/sizeof(arr[0]);
    insatend(arr,39,y);
    for(int i=0; i<y+1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;

}
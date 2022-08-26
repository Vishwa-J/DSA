// Question-2  Insert element at index

#include<iostream>
using namespace std;
int* insatind(int arr[], int n,int pos){
    pos=pos-1;
    int s=sizeof(arr);
    for (int i = s; i >=pos; i--)
    {
        /* code */
        arr[i]=arr[i-1];

    }
    arr[pos]=n;
    return arr;
}
int main(){
    int arr[7]={2,54,78,64,32,45,85};
    
    insatind(arr,99,4);
    for (int  i = 0; i <=sizeof(arr)+1; i++)
    {
        cout<<arr[i]<<" ";
        /* code */
    }
    

}
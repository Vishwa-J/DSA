// question-5
#include<iostream>
using namespace std;
int prodarray(int x[],int n){
    if(n==0){
        return 1;
    }
    return(x[n]*prodarray(x,n-1));
    }

int main(){
    int arr[]={1,5,8,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int z=prodarray(arr,n-1);
    cout<<z<<endl;
    return 0;
}
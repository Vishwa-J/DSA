// Question-1 Search array

#include <iostream>
using namespace std;
int srcharray(int arr[],int n){
    int x;
    for (int i = 0; i <=sizeof(arr); i++)
    {
        /* code */
        if(arr[i]==n){
            x=i;
            break;
            x=x;
        }
        x=-1;
    }
    return x;
    
}
int main(){
    int arr[8]={2,4,8,4,3,7,9,11};
    int x=srcharray(arr,25);
    cout<<x<<endl;
}
#include<bits/stdc++.h>
using namespace std;
void createhash(int arr[],int arr2[][10],int size){
    int key;
    for(int i=0;i<size;i++){
        key=arr[i]%10;
        if(arr2[key][0]==0){
            arr2[key][0]=arr[i];
        }
        else{
            for(int j=1;j<10;j++){
                if(arr2[key][j]==0){
                    arr2[key][j]=arr[i];
                    break;
                }
            }     
            }
        }
    for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cout<<arr2[i][j]<<" ";
            }
            cout<<"\n";
    }
}
    
int main(){
    int arr[]={5,1,2,3,4,16,7,8,9,15,25,45,57,67,78,98,99,23,32,44,66};
    int size=sizeof(arr)/sizeof(arr[0]);
    int arr2[10][10];
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                arr2[i][j]=0;
            }  
    }
    createhash(arr,arr2,size);
    return 0;
}
/*
Output:
0 0 0 0 0 0 0 0 0 0 
1 0 0 0 0 0 0 0 0 0 
2 32 0 0 0 0 0 0 0 0
3 23 0 0 0 0 0 0 0 0
4 44 0 0 0 0 0 0 0 0 
5 15 25 45 0 0 0 0 0 0
16 66 0 0 0 0 0 0 0 0
7 57 67 0 0 0 0 0 0 0
8 78 98 0 0 0 0 0 0 0 
9 99 0 0 0 0 0 0 0 0
*/


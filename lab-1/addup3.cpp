// Question-3
#include<iostream>
using namespace std;
int addup(int n){
    int y=0;
    if(n==1){
        return 1;
    }
    else{
        return n+addup(n-1);
    }
    
    
}
int main(){
    int x=addup(8);
    cout<<x;
    return 0;
}

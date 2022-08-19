// Question-1
// to find factorial of a number using recursion
#include<iostream>
using namespace std;
int fact(int n){
    if(n>0){
        return fact(n-1)*n;
    }
    return 1;
}
int main(){
    cout<<fact(4)<<endl;
    return 0;
}
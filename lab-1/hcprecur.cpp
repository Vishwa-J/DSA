// Question-6
#include <iostream>
using namespace std;
int hcf(int a, int b){
    if(a==0){
        return b;
    }
     if(b==0){
        return a;
    }
    if(a==b){
        return a;
    }
    if(a>b){
        return hcf(a-b, b);
    }
    else
    return hcf(a,b-a);


}
int main(){
    int a=hcf(3,9);
    cout<<a<<endl;
    return 0;
}
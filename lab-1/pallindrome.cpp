// Question-7
#include<iostream>
#include<string.h>
using namespace std;
int IsPali(char str[],int first, int last){
   
    if(first<last+1){
        first++;
        last--;
        return IsPali(str,first,last);
    }
    if(first==last){
        return 1;}
    if(str[first]!=str[last-1]){
        return 0;}
    return 1;

}
int main(){
    char str[]="malayam";
    int lgt=strlen(str);
    cout<<IsPali(str,0,lgt)<<endl;
    return 0;
}
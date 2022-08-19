// Question-2
#include<iostream>
using namespace std;

void fourth(){
cout<<"I am the fourth"<<"\n";    
}
void third(){
fourth();
cout<<"I am the third"<<"\n";    
}
void second(){
third();
cout<<"I am the second"<<"\n";
}
void first(){
second();
cout<<"I am the first"<<"\n";
} 



    int main(){
    first();
}
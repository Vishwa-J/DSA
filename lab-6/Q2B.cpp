// Q.1(A) Implement linear probing
#include <bits/stdc++.h>
#define SIZE 10

using namespace std;
 
int Hash(int key){
    return key % SIZE;
}
 
int QuadraticProbe(int H[], int key){
    int idx = Hash(key);
    int i = 0;
    while (H[(idx+i*i) % SIZE] != 0){
        i++;
    }
    return (idx + i*i) % SIZE;
}
 
void Insert(int H[], int key){
    int idx = Hash(key);
 
    if (H[idx] != 0){
        idx = QuadraticProbe(H, key);
    }
    H[idx] = key;
}

void print(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
 
 
int main() {
 
    int A[] = {12, 22, 42, 25, 29, 62, 81};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<"Given array: "<<endl;
    print(A, n);
    // Hash Table
    int HT[SIZE] = {};
    for (int i=0; i<n; i++){
        Insert(HT, A[i]);
    }
    cout<<"Hash Table: "<<endl;
    print(HT, SIZE);

    return 0;
}
/*
Output:
Given array: 
12 22 42 25 29 62 81
Hash Table:
81 62 12 22 0 25 42 0 0 29
*/
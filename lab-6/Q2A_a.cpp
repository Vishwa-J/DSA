// Q.1(A_a) Implement linear probing
#include <bits/stdc++.h>
#define SIZE 17

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
 
int Search(int H[], int key){
    int idx = Hash(key);
    int i = 0;
    while (H[(idx+i*i) % SIZE] != key){
        i++;
        if (H[(idx + i*i) % SIZE] == 0){
            return -1;
        }
    }
    cout<<key;
    return (idx + i*i) % SIZE;
}

void print(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
 
 
int main() {
 
    int A[] = {133, 88, 92, 221, 174};
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


    int number = Search(HT, 100);
    cout << " found at: " << number << endl;
 
    number = Search(HT, 133);
    cout << " found at: " << number << endl;
 
    number = Search(HT, 174);
    cout << " found at: " << number << endl;
 
    return 0;
}
/*
Output:
Given array: 
133 88 92 221 174
Hash Table:
221 0 0 88 174 0 0 92 0 0 0 0 0 0 133 0 0
 found at: -1
133 found at: 14
174 found at: 4
*/
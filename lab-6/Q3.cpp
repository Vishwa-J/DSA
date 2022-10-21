// Double Hashing
#include <iostream>
#define SIZE 17
#define PRIME 11

using namespace std;
 
int Hash(int key){
    return key % SIZE;
}
 
int PrimeHash(int key){
    return PRIME - (key % PRIME);
}
 
int DoubleHash(int H[], int key){
    int idx = Hash(key);
    int i = 0;
    while (H[(Hash(idx) + i * PrimeHash(idx)) % SIZE] != 0){
        i++;
    }
    return (idx + i * PrimeHash(idx)) % SIZE;
}
 
void Insert(int H[], int key){
    int idx = Hash(key);
 
    if (H[idx] != 0){
        idx = DoubleHash(H, key);
    }
    H[idx] = key;
}
 
int Search(int H[], int key){
    int idx = Hash(key);
    int i = 0;
    while (H[(Hash(idx) + i * PrimeHash(idx)) % SIZE] != key){
        i++;
        if (H[(Hash(idx) + i * PrimeHash(idx)) % SIZE] == 0){
            return -1;
        }
    }
    cout<<key;
    return (Hash(idx) + i * PrimeHash(idx)) % SIZE;
}

void print(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }

int main() {
 
    int A[] = {133, 82, 92, 221, 174};
    int n = sizeof(A)/sizeof(A[0]);
    print(A, n);
 
    // Hash Table
    int HT[10] = {0};
    for (int i=0; i<n; i++){
        Insert(HT, A[i]);
    }
    print(HT, SIZE);
 
    int number = Search(HT, 100);
    cout << " key found at: " << number << endl;
 
    number = Search(HT, 133);
    cout << " key found at: " << number << endl;

    number = Search(HT, 174);
    cout << " key found at: " << number << endl;
 
    return 0;
}
/*
Output:
133 82 92 221 174 
221 174 0 0 82 133 0 92 0 0 -608824071 32758 133 82 92 221 174
 key found at: -1
133 key found at: 5
174 key found at: 1
*/
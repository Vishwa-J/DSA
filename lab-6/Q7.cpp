#include <bits/stdc++.h>

using namespace std;

// Linked List node

class Node{

public:
	int data;
	Node* next;
};
// Hash Table
class HashTable{

public:
	Node** HT;
	HashTable();
	int hash(int key);
	void Insert(int key);
    void displayHash();
	~HashTable();
};

HashTable::HashTable() {
	HT = new Node* [10];
	for (int i=0; i<10; i++){
		HT[i] = nullptr;
	}
}

int HashTable::hash(int key) {
	return key % 10;
}

void HashTable::Insert(int key) {
	int hIdx = hash(key);
	Node* t = new Node;
	t->data = key;
	t->next = nullptr;
	// Case: No nodes in the linked list
	if (HT[hIdx] == nullptr){
		HT[hIdx] = t;
	} else {
		Node* p = HT[hIdx];
		Node *q=HT[hIdx];
		// Traverse to find insert position
		while (p && p->data < key){
			q=p;
			p = p->next;
		}
		// Case: insert position is first
		if (q == HT[hIdx]){
			t->next = HT[hIdx];
			HT[hIdx] = t;
		} else {
			t->next = q->next;
			q->next = t;
		}
	}
}

void HashTable::displayHash() {
  for (int i = 0; i < 10; i++) {
    cout << i;
    for (auto x : HT[i])
      cout << " --> " << x;
    cout << endl;
  }
}

int main() {
	int A[] = {16, 12, 25, 39, 6, 122, 5, 68, 75};
	int n = sizeof(A)/sizeof(A[0]);
	HashTable H;

	return 0;
}
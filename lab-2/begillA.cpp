// Question-8(A) Insert element in the begin in a linked list
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node(int a){
		data=a;
		next=NULL;
	}
};

void print(Node *head){
	Node *curr=head;
	while(curr!= NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<"\n";
}

Node *linsatbeg(Node *head, int n){
    Node *x = new Node(n);
    x -> next = head;
    return x;
}

int main(){
    Node *head= new Node(38);
	head->next= new Node(49);
	head->next->next= new Node(56);
	head=linsatbeg(head,39);
    print(head);

    return 0;
}
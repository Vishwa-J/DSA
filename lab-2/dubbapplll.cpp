// Question-11 append element in double-linked list
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* next;
    Node* prev;
	Node(int a){
		data=a;
		next=NULL;
        prev=NULL;
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
Node *dubbly_append(Node *head,int x){
    Node *y = new Node(x);
    if(head == NULL)
    {
        return y;
    }
    Node *curr = head;
    while (curr -> next != NULL)
    {
        /* code */
        curr = curr -> next;
    }

    curr -> next = y;
    y -> prev = curr;

    return head;
    
}
int main(){
    Node *head= new Node(38);
	Node *y1= new Node(49);
	Node *y2= new Node(56);
    head -> next = y1;
    y1 -> prev = y1;
    y1 -> next = y2;
    y1 -> prev = y1;

	head=dubbly_append(head,99);
    print(head);

    return 0;
}
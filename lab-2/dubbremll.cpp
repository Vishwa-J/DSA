// Question-12 remove an element from double-linked list
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
Node *dubbly_remove(Node *head,int x){
    Node *y = head;
    while (y != NULL)
    {
       if (y->data == x)
            {
                if(y -> next != NULL){
                y->next->prev = y->prev;
                y->prev->next = y->next;
            }
        else
            {
                y->prev->next = NULL;
            }
       
        }
    y = y -> next;
    }
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

	head=dubbly_remove(head,56);
    print(head);
    }
    
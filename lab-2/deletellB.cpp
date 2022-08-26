// Question-8(B) deletes the last element in a linked list
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
Node *deletend(Node *head){
     if (head == NULL)
    {
        return NULL;
    }
    if ((head -> next) == NULL)
    {
        delete head;
        return NULL;
    }

    Node *curr = head;
    while ((curr -> next -> next) != NULL)
    {
        curr = curr -> next;
    }
    delete (curr -> next);
    curr -> next = NULL;

    return head;
}
int main(){
    Node *head= new Node(38);
	head->next= new Node(49);
	head->next->next= new Node(56);
	head=deletend(head);
    print(head);

    return 0;
}
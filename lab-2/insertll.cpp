// Question-7  Insert element using linked list
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
Node *linsatend(Node *head, int b){
    Node *x = new Node (b);
    if(head == NULL){
        return x;
    }
    Node *curr = head;
    while(curr -> next != NULL){
        curr = curr -> next;
    }
    curr -> next=x;
    return head;

}
int main(){
    Node *head= new Node(38);
	head->next= new Node(49);
	head->next->next= new Node(56);
	head=linsatend(head,39);
    print(head);

    return 0;
}
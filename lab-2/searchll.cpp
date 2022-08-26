// Question-6  search in a linked list
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

int lsrch(Node *head, int x){
	int b=1;
	Node *curr = head;
	while (curr!=NULL){
		if((curr -> data) == x){
			return b;
		}
		else{
			b = b + 1;
			curr = curr -> next;
		}

	}
	return -1;
	
}
int main(){
	Node *head= new Node(38);
	head->next= new Node(49);
	head->next->next= new Node(56);
	print(head);
	cout<<lsrch(head,49);
}
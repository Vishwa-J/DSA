// Question-10 replace an element in a linked list
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
Node *replaceint(Node *head,int x, int n){
    int f=1;
    Node *curr = head;
    while (curr != NULL)
    {
        /* code */
        if(x==f){
            (curr -> data) = n;
            return head;
        }
        else{
            f++;
            curr = curr -> next;
        }
    }
    return NULL;
    
}
int main(){
    Node *head= new Node(38);
	head->next= new Node(49);
	head->next->next= new Node(56);
	head=replaceint(head,2,99);
    print(head);

    return 0;
}
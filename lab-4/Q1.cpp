// C++ program to Implement a stack
// using singly linked list
#include <bits/stdc++.h>
using namespace std;

struct Node {
 int data=NULL;
 Node* next=NULL;
};

Node* top;
// data in the stack insert at the beginning
void push(int data)
{

 Node* temp = new Node();

 // Check if stack (heap) is full.
 if (!temp) {
  cout << "\nStack Overflow";
  exit(1);
 }

 temp->data = data;

 // Put top pointer reference into temp link
 temp->next = top;

 // Make temp as top of Stack
 top = temp;
}

// to check whether the stack is empty or not
int isEmpty()
{
 // If top is NULL it means that
 // there are no elements are in stack
 return top == NULL;
}

// function to return top element in a stack
int peek()
{

 // If stack is not empty , return the top element
 if (!isEmpty())
  return top->data;
 else
  exit(1);
}

//function to pop top element from the stack
void pop()
{
 Node* temp;

 if (top == NULL) {
  cout << "\nStack Underflow" << endl;
  exit(1);
 }
 else {

  // Assign top to temp
  temp = top;

  // Assign second node to top
  top = top->next;

  // This will automatically destroy
  // the link between first node and second node

  // Release memory of top node
  // i.e delete the node
  free(temp);
 }
}

// Function to print all the
// elements of the stack
void display()
{
 Node* temp;

 // Check for stack underflow
 if (top == NULL) {
  cout << "\nStack Underflow";
  exit(1);
 }
 else {
  temp = top;
  while (temp->next != NULL) {

   // Print node data
   cout << temp->data << "-> ";
   // Assign temp next to temp
   temp = temp->next;
        } 
        cout<<temp->data;
    } 
}

// Driver Code
int main()
{

 // Push the elements of stack
 push(11);
 push(22);
 push(33);
 push(44);

 // Display stack elements
 display();
 // Print top element of stack
 cout << "\nTop element is " << peek() << endl;

 // Delete top elements of stack
 pop();
 pop();

 // Display stack elements
 display();

 // Print top element of stack
 cout << "\nTop element is " << peek() << endl;

 return 0;
}

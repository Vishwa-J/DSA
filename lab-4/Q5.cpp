// Linked list to implement priority Queue
#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  int priority;
  Node * next;
};

Node * front = NULL;

void insert (int data, int priority)
{

 Node * temp, *curr, *pre = NULL;

 temp = new Node;
 temp->data = data;
 temp->priority = priority;

 if (front == NULL or priority < front->priority)
  {
    temp->next = front;
    front = temp;
  }

 else
  {
    curr = front;

    while (curr and priority >= curr->priority)
	{
	  pre = curr;
	  curr = curr->next;
	}

    temp->next = pre->next;
    pre->next = temp;
  }
}

void Delete ()
{
  if (front == NULL)
  {
    return;
  }

  else
    {
      Node * temp;
      temp = front;

      cout << "Deleted item is " << temp->data << endl;

      front = temp->next;
      free (temp);
    }
}

void display ()
{
  if (front == NULL)
    cout << "Empty" << endl;

  Node * curr = front;

  cout<<"Priority-Queue elements are : ";

  while (curr)
    {
      cout << curr->data << " ";
      curr = curr->next;
    }

  cout << endl;

  return;
}

void peak ()
{
  cout << "Peak element is :" << front->data << endl;
}

int main ()
{
  insert (12, 1);
  insert (52, 3);
  insert (8, 2);
  insert (50, 1);
  insert (7, 3);


  display ();

  peak();

  Delete ();
  Delete ();
  display ();

  return 0;

}
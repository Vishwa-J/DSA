//Deque operations using linked list

#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node*next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }

};
node*front=NULL;
node*rear=NULL;

bool isEmpty(){
    if(front==NULL and rear==NULL){
        return true;
        }
    else{
        return false;

    }
}

void enqueueAtFront(int num){
    node *temp = new node(num);

    // If inserting the first element/node
    if (front == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        temp->next = front;
        front = temp;
    }

    
}

void enqueueAtRear(int num){
    node *temp = new node(num);

    // If inserting the first element/node
    if (front == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

void dequeueAtFront(){
    if (isEmpty())
        cout << "Queue is empty, nothing to dequeue"<<endl;
    else
        // only one element/node in queue.
        if (front == rear)
        {
            delete (front);
            front = rear = NULL;
        }
        else
        {
            node *temp = front;
            front = front->next;
            delete (temp);
        }

}

void dequeueAtRear()
{
   if (isEmpty())
        cout << "Queue is empty, nothing to dequeue"<<endl;
    else
        // only one element/node in queue.
        if (front == rear)
        {
            delete (front);
            front = rear = NULL;
        }
        else
        {
            node*temp=front;
            while(temp->next->next!=NULL){   //accessing the second last element
                temp=temp->next;            
            }
            temp->next=NULL;
            rear=temp;
        }
    
}
void display(){
      if (isEmpty())
        cout << "Empty\n";
    else
    {
        node *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    
 
    
}

void getFront(){
    if (isEmpty())
        cout << "Empty\n";
    else
        cout << "Front element is: " << front->data << endl;
    
}

void getRear(){
    if (isEmpty())
        cout << "Empty\n";
    else
        cout << "Rear element is: " << rear->data << endl;
}


int main(){
    
    enqueueAtFront(33);
    enqueueAtFront(58);
    enqueueAtFront(75);
    
    enqueueAtRear(54);
    enqueueAtRear(36);
    display();
    isEmpty();
    getFront();
    getRear();
}
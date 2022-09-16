// Balancing parenthesis using stack data structure in a single linked list
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

struct Stack{
    Node *head;
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }

    void push(char val){
        Node *temp = new Node(val);
        temp -> next = head;
        head = temp;
        size++;
    }

    int pop(){
        if (head == NULL){
            cout << "Empty!" << endl;
            return INT_MAX;
        }

        int res = head -> data;
        head = head -> next;
        size--;
        return res;
    }

    int peek(){
        if (head == NULL){
            cout << "Empty" << endl;
            return INT_MAX;
        }

        return head -> data;
    }

    bool isEmpty(){
        return head==NULL;
    }

    void display(){
        Node *curr = head;
        while (curr != NULL)
        {
            /* code */
            cout << curr -> data << " ";
            curr = curr -> next;
        }
        cout << endl;
    }

};

bool matching(char a,char b){
    return (( a=='(' && b==')' )||( a=='[' && b==']' )||( a=='{' && b=='}' ));
}

bool isBalanced(string str){
      
    Stack s; 
    
    for (int i = 0; i < str.length(); i++)  
    { 
        if(str[i]=='/' && str[i+1]=='/'){
            break;
        }
        else if (str[i] == '(' || str[i] == '[' || str[i] == '{')  
        {  
            s.push(str[i]); 
        } 
        else {
                if (s.isEmpty()==true) 
                    return false;
                else if(matching(s.peek(),str[i])==false)
                    return false;
                else
                    s.pop();
         }
    }    
    return (s.isEmpty()==true); 
}

int main()
{
    string str = "{(}[]//(())"; 
    
    if (isBalanced(str)) 
        cout << "Valid"; 
    else
        cout << "Non-valid"; 

    return 0; 
}
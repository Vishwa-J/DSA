// Implementing post-fix operation using stack in a singly linked list
#include<bits/stdc++.h>
using namespace std;
  struct node {
        int data;
        node *next;
  };
    node *top = NULL;

//  create a new node with the given data
  node* createNode(int data) {
        node *temp = new node;
        temp->data = data;
        temp->next = NULL;
  }

  /* push the input data into the stack */
  void push (int data) {
        node *ptr = createNode(data);
        if (top == NULL) {
                top = ptr;
                return;
        }
        ptr->next = top;
        top = ptr;
  }

  /* pop the top element from the stack */
  int pop () {
        int data;
        struct node *temp;
        if (top == NULL)
                return -1;
        data = top->data;
        temp = top;
        top =  top->next;
        free(temp);
        return (data);
  }

  int main() {
        char str[100]="54 8 4 / *";
        int i, data = -1, oper1, oper2, result;
        for (i = 0; i < strlen(str); i++) {
                if (isdigit(str[i])) {
                        /*
                         * if the char is digit, parse
                         * character by character to get
                         * complete operand
                         */
                        if(data==-1){
                            data=0;
                        }
                        else{
                            data=data;
                        }
                        data = (data * 10) + (str[i] - 48);
                        continue;
                }

                /* push the operator into the stack */
                if (data != -1) {
                        push(data);
                }

                if (str[i] == '+' || str[i] == '-'
                        || str[i] == '*' || str[i] == '/') {
                        /*
                         * if the character is an operator,
                         * then pop two elements from the stack,
                         * apply operator and push the result into
                         * the stack
                         */
                        oper2 = pop();
                        oper1 = pop();
                        if (oper1 == -1 || oper2 == -1)
                                break;
                        switch (str[i]) {
                                case '+':
                                        result = oper1 + oper2;
                                        /* pushing result into the stack */
                                        push(result);
                                        break;
                                case '-':
                                        result = oper1 - oper2;
                                        push(result);
                                        break;
                                case '*':
                                        result = oper1 * oper2;
                                        push(result);
                                        break;
                                case '/':
                                        result = oper1 / oper2;
                                        push(result);
                                        break;
                        }
                }
                data = -1;
        }
        if (top != NULL && top->next == NULL)
                cout<<"Output: "<<top->data<<endl;
        else
                cout<<"wrong expression"<<endl;
        return 0;
  }
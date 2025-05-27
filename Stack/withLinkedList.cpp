#include<iostream>
using namespace std;
class Node{
    public:

    int val;
    Node *next;

    Node(): val(0), next(NULL) {}
    Node(int val): val(val), next(NULL) {}
};

class Stack{
    Node *top;
    int size; //actual size of stack

    public:
    Stack(){
        top = NULL;
        size = 0;
    }
    //push
    void push(int val)
    {
        Node* temp = new Node(val);
        if(!temp) cout<<"Stack OverFlow"<<endl;//actually it means that heap is full
        else{
            temp->next = top;
            top = temp;
            cout<<temp->val<<" is pushed!"<<endl;
            size++;
        }
    }
    //pop
    void pop(){
        if(!top) cout<<"Stack is Empty!"<<endl;
        else{
            Node* temp = top;
            top = top->next;
            delete temp;
            cout<<top->val<<" removed succesfully!"<<endl;
            size--;
        }
    }
    int peek(){
        if(!top){
            cout<<"Stack is empty!"<<endl;
            return -1;
        }
        else{
            return top->val;
        }
    }
    bool IsEmpty(){
        return top == NULL;
    }
    int IsSize(){
        return size;
    }
};
int main(){
    Stack obj;
    obj.push(5);
    obj.push(6);
    obj.push(8);
    obj.pop();
    cout<<obj.IsSize()<<endl;
}
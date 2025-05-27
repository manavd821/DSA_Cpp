#include<iostream>
class Node{
    public:
    int val;
    Node *next;
    Node(): val(0), next(NULL) {}
    Node(int x): val(x), next(NULL){}
};

class Queue{
    Node *front,*rear;
    int size;
    public:
    Queue(){
        rear = front = NULL;
        size = 0;
    }
    bool IsEmpty(){
        // return front == NULL;
        //or
        return size == 0;
    }
    int getSize(){
        return size;
    }
    void push(int x){
        Node *temp = new Node(x);
        if(IsEmpty()){
            front = rear = temp;
            size++;
        }
        else{
            rear->next = temp;
            rear = temp;
            size++;
        }
    }
    void pop(){
        if(IsEmpty()){
            std::cout<<"Queue is Empty\n";
        }
        else{
            if(getSize() == 1){// size = 1
                delete front;
                front = rear = NULL;
            }
            else{
                Node* temp = front;
                front = front->next;
                delete temp;
            }
            size--;
        }
        
    }
    int start(){
        if(IsEmpty()){
            std::cout<<"Queue is Empty!"<<std::endl;
            return -1;
        }
        return front->val;
    }

    ~Queue(){
        while(!IsEmpty()){
            pop();
        }
    }
};
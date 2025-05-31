#include<iostream>
class Node{
    public:
    int val;
    Node *next,*prev;
    Node():val(0), next(NULL), prev(NULL){};
    Node(int val): val(val), next(NULL), prev(NULL){};
};
class Dequeue{
    Node* front, *rear;
    public:
    Dequeue(){
        front = rear = NULL;
    };
    void push_front(int x){
        if(!front){//empty
            front = new Node(x);
            rear = front;
        }
        else{//Not Empty
            Node* temp = new Node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
        }
        std::cout<<x<<" is successfully pushed!\n";
    }
    void push_back(int x){
        if(!front){//empty
            front = new Node(x);
            rear = front;
        }
        else{//not empty
            Node* temp = new Node(x);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
        }
        std::cout<<x<<" is successfully pushed!\n";
    }
    void pop_front(){
        if(!front){//empty
            std::cout<<"Dequeue is empty!"<<std::endl;
        }
        else{
            Node* temp = front;
            front = front->next;
            delete temp;
            if(!front) rear = NULL;
            else front->prev = NULL;
        std::cout<<"pop front is successfully done!\n";
        }
    }
    void pop_back(){
        if(!front){//empty
            std::cout<<"Dequeue is empty!"<<std::endl;
        }
        else{
            Node* temp = rear;
            rear = rear->prev;
            delete temp;
            if(!rear) front = NULL;
            else rear->next = NULL;
        std::cout<<"pop back is successfully done!\n";
        }
    }
    int start(){
        if(!front){
            std::cout<<"Dequeue is empty!"<<std::endl;
            return -1;
        }
        else return front->val;
    }
    int end(){
        if(!front){
            std::cout<<"Dequeue is empty!"<<std::endl;
            return -1;
        }
        else return rear->val;
    }
};
int main(){
    Dequeue dq;
    dq.pop_back();
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    std::cout<<dq.start()<<std::endl;
    std::cout<<dq.end()<<std::endl;
    dq.pop_back();
    std::cout<<dq.end()<<std::endl;
    std::cout<<dq.start()<<std::endl;
    dq.pop_front();
    std::cout<<dq.end()<<std::endl;
    std::cout<<dq.start()<<std::endl;


}
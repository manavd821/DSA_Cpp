#include<iostream>

class Dequeue{
    int *arr,size, front,rear;
    public:
    Dequeue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = rear = -1;
    }
    bool IsEmpty(){
        return front == -1;
    }
    bool IsFull(){
        return (rear+1) % size == front;
    }
    void push_front(int x){
        if(IsFull()){//array full
            std::cout<<"Dequeue is full!\n";
        }
        else if(IsEmpty()){
            front = rear = 0;
            arr[front] = x;
        std::cout<<x<<" is successfully pushed!\n";
        }
        else{
            front = (front-1 + size)%size;
            arr[front] = x;
        std::cout<<x<<" is successfully pushed!\n";
        }
    }
    void push_back(int x){
        if(IsFull()){//array full
            std::cout<<"Dequeue is full!\n";
        }
        else if(IsEmpty()){
            front = rear = 0;
            arr[front] = x;
        std::cout<<x<<" is successfully pushed!\n";
        }
        else{
            rear = (rear+1)%size;
            arr[rear] = x;
        std::cout<<x<<" is successfully pushed!\n";
        }
    }
    void pop_front(){
        if(IsEmpty()){
            std::cout<<"Dequeue is empty!\n";
        }
        else if(front == rear){
            front = rear = -1;
            std::cout<<"Pop front successfully\n";
        }
        else{
            front = (front+1)%size;
            std::cout<<"Pop front successfully\n";
        }
    }
    void pop_back(){
        if(IsEmpty()){
            std::cout<<"Dequeue is empty!\n";
        }
        else if(front == rear){
            front = rear = -1;
            std::cout<<"Pop front successfully\n";
        }
        else{
            rear = (rear-1+size)%size;
            std::cout<<"Pop back successfully\n";
        }
    }
    int start(){
        if(IsEmpty()){
            std::cout<<"Dequeue is empty!\n";
            return -1;
        }
        else return arr[front];
    }
    int end(){
        if(IsEmpty()){
            std::cout<<"Dequeue is empty!\n";
            return -1;
        }
        else return arr[rear];
    }

};
int main(){
   Dequeue dq(3);
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
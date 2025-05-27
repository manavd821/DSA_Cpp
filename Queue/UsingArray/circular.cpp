#include<iostream>

class Queue{
    int front,rear,size;
    int *arr;
    public:
    Queue(int size){
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
    void push(int x){
        if(IsEmpty()){
            front++;
            rear++;
            arr[rear] = x;
            std::cout<<x<<" is pushed succesfully!"<<std::endl;
        }
        else if(IsFull()){
            std::cout<<"Queue is Full!"<<std::endl;
        }
        else{
            rear = (rear+1) % size;
            arr[rear] = x;
            std::cout<<x<<" is pushed succesfully!"<<std::endl;
        }
    }
    void pop(){
        if(IsEmpty()){
            std::cout<<"Queue is Empty!"<<std::endl;
        }
        else{
            // front = (front + 1) % size;
            // if (front > rear){ //empty
            //     front = rear = -1;
            // }
            // or
            if(front == rear){
                front = rear = -1;
            }
            else{
                front = (front + 1) % size;
            }
        }
    }
    int start(){
        if(IsEmpty()){
            std::cout<<"Queue is Empty!"<<std::endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
};
int main(){
    Queue que = Queue(5);
    std::cout<<que.IsEmpty()<<std::endl;
    std::cout<<que.IsFull()<<std::endl;

    que.push(1);
    que.push(2);
    std::cout<<que.start()<<std::endl;
    que.pop();
    que.pop();
    que.pop();

    std::cout<<que.IsEmpty()<<std::endl;
    que.push(2);
    que.push(2);
    que.push(2);
    que.push(2);
    que.push(2);
    que.push(2);
    std::cout<<que.IsFull()<<std::endl;


}
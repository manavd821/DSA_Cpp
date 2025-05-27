#include <iostream>

class Queue {
    int front,rear,size;
    int *arr;
    public:
    Queue(int size){
        this->size = size;
        arr = new int[size];
        front=-1,rear=-1;
    }
    bool IsEmpty(){
       return front == -1;
    }
    bool IsFull(){
        return rear == size-1;
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
            rear++;
            arr[rear] = x;
            std::cout<<x<<" is pushed succesfully!"<<std::endl;
        }
    }
    void pop(){
        if(IsEmpty()){
            std::cout<<"Queue is Empty!"<<std::endl;
        }
        else{
            front++;
            if(front > rear){ //queue is empty now
                front = rear = -1;
                // rear = -1;
            }
            std::cout<<"pop operation succesfully!"<<std::endl;
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
#include <bits/stdc++.h>
class MinHeap{
    int* arr;
    int size, total_size;

    public:
    MinHeap(int total_size) : total_size(total_size), size(0), arr(new int[total_size]) {
        std::cout<<"MinHeap has created."<<std::endl;
    }
    bool isEmpty(){
        return this->size == 0;
    }
    bool isFull(){
        return this->size == this->total_size;
    }
    void insert(int val){
        // if(this->)
    }
};

int main() {

    

    return 0;
}
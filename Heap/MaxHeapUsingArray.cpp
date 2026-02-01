#include <bits/stdc++.h>

class MaxHeap{
    int *arr;
    int size;
    int total_size;

    public:
    MaxHeap(int total_size): total_size(total_size), size(0), arr(new int[total_size]){
        std::cout<<"Heap is created!"<<std::endl;
    };

    // check if empty
    bool isEmpty(){
        return size == 0;
    }
    bool isFull(){
        return size == total_size;
    }
    // insert into the Heap
    void insert(int val){

        if(isFull()){
            std::cout<<"Heap is full!"<<std::endl;
            return;
        }

        arr[size] = val;
        int idx = size;
        size++;

        // check Max Heap
        // Compare it with its parent
        while(idx > 0 && arr[idx] > arr[(idx-1)/2]){
            std::swap(arr[idx] , arr[(idx-1)/2]);
            idx = (idx - 1)/2;
        }
        std::cout<<arr[idx]<<" is inserted into the Heap."<<std::endl;
    }
    void print(){

        for(int i =0; i < size; i++){
            std::cout<<arr[i]<<" ";
        }
        std::cout<<std::endl;
    }
    
    void Heapify(int idx){
        int largest = idx;
        int left = 2*idx + 1;
        int right = 2*idx + 2;

        // largest will store the element which is greater between parent, left child and right child

        if(left < size && arr[left] > arr[largest]){
            largest = left;
        }
        if(right < size && arr[right] > arr[largest]){
            largest = right;
        }
        if(largest != idx){
            std::swap(arr[idx], arr[largest]);
            Heapify(largest);
        }
    }
    void deleteOp(){
        if(this->isEmpty()){
            std::cout<<"Heap is empty"<<std::endl;
            return;
        }
        int idx = 0;
        std::cout<<arr[0]<<" deleted succesfully"<<std::endl;
        arr[0] = arr[size-1]; 
        this->size--;

        if(this->isEmpty()) return;

        Heapify(0);
        
    //     while(idx < (size - 1)/2){
    //         // check left child
    //         if(arr[idx] < arr[idx*2 + 1]){
    //             std::swap(arr[idx] , arr[idx*2 + 1]);
    //             idx = idx*2 + 1;
    //         }
    //         // right child
    //         else if(arr[idx] < arr[idx*2 + 2]){
    //             std::swap(arr[idx] , arr[idx*2 + 2]);
    //             idx = idx*2 + 2;
    //         }
    //         // No more swap
    //         else{
    //             break;
    //         }
    //     }
    }
};

int main()
{
    /* code */
    MaxHeap *H1 = new MaxHeap(7);
    H1->insert(30);
    H1->insert(18);
    H1->insert(15);
    H1->insert(14);
    H1->insert(17);
    H1->insert(13);
    H1->insert(10);

    H1->print();
    H1->deleteOp();
    H1->print();
    H1->deleteOp();
    H1->print();

    return 0;
}

#include <bits/stdc++.h>

// step down approach -> O(n) time to create heap if array is given
void Heapify(std::vector<int> &arr, int idx){
    while(idx < arr.size()){
        int largest = idx;
        int left = idx*2 + 1;
        int right = idx*2 + 2;
    
        if(left < arr.size() && arr[left] > arr[largest]){
            largest = left;
        }
        if(right < arr.size() && arr[right] > arr[largest]){
            largest = right;
        }
        if(largest != idx){
            std::swap(arr[largest], arr[idx]);
            idx = largest;
        }
        else{
            break;
        }
    }
}
void Heapify_recursion(std::vector<int> &arr, int idx){
        int largest = idx;
        int left = idx*2 + 1;
        int right = idx*2 + 2;
    
        if(left < arr.size() && arr[left] > arr[largest]){
            largest = left;
        }
        if(right < arr.size() && arr[right] > arr[largest]){
            largest = right;
        }
        if(largest != idx){
            std::swap(arr[largest], arr[idx]);
            Heapify_recursion(arr, largest);
        }
}
void buildMaxHeap(std::vector<int>&arr){
    int size = arr.size();
    for(int i = size/2 - 1; i>=0; i--){
        Heapify(arr, i);
        // Heapify_recursion(arr,i);
    }
}
void display(std::vector<int>&arr){
    for(int ele : arr){
        std::cout<<ele<<" ";
    }
    std::cout<<std::endl;
}
int main() {

    std::vector<int>arr = {10,9,8,3,5,13,18,14,11,70};
    
    display(arr);
    buildMaxHeap(arr);
    display(arr);
    
    return 0;
}
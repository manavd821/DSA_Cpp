#include<iostream>
#include<queue>
#include<vector>
#include<stack>
std::queue<int> reverseFirstK(std::queue<int> q, int k) {
        // code here
        std::stack<int>st;
        std::vector<int>arr;
        k %= q.size();
        while(k--){
            st.push(q.front());
            q.pop();
        }
        while(!q.empty()){
            arr.push_back(q.front());
            q.pop();
        }
        //reverse element
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        //rest element as it is
        for(int i=0; i<arr.size(); i++){
            q.push(arr[i]);
        }
        return q;
    }

    void printQueue(std::queue<int> &que){
        int size = que.size();
        while(size--){
            std::cout<<que.front()<<" ";
            que.push(que.front());
            que.pop();
        }
    }
int main(){
    std::queue<int>que;
    // std::cout<<que.size()<<std::endl;
    // que.push(4);
    // que.push(5);
    // que.push(6);
    // std::cout<<que.front()<<std::endl;
    // std::cout<<que.back()<<std::endl;
    // que.pop();
    // std::cout<<que.front()<<std::endl;
    // std::cout<<que.empty()<<std::endl;
    // std::cout<<que.size()<<std::endl;

    que.push(6);
    que.push(10);
    que.push(7);

    //print element without changing que

    // methode: 1
    // std::vector<int>arr;
    // while(!que.empty()){
    //     std::cout<<que.front()<<std::endl;
    //     arr.push_back(que.front());
    //     que.pop();
    // }
    // for(int i=0; i<arr.size(); i++){
    //     que.push(arr[i]);
    // }

    // method : 2
    // int size = que.size();
    // while(size--){
    //     std::cout<<que.front()<<" ";
    //     que.push(que.front());
    //     que.pop();
    // }

    std::queue<int>q = reverseFirstK(que,5);
    printQueue(q);

}
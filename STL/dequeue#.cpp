#include <bits/stdc++.h>

void display(std::deque<int>&dq){
    for(auto ele : dq){
        std::cout<<ele<<" ";
    }
    std::cout<<std::endl;
}
int main() {

    std::deque<int>dq;
    for(int i=0; i<10; i++){
        dq.push_back(i+1);
    }
    std::cout<<"Deque Elements:"<<std::endl;    
    display(dq);

    
    return 0;
}
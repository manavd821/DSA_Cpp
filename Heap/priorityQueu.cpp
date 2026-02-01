#include <bits/stdc++.h>

int main() {

    std::priority_queue<int>p;
    p.push(10);
    p.push(11);
    p.push(30);
    p.push(30);
    p.push(20);

    std::cout<<p.top()<<std::endl;
    std::cout<<p.size()<<std::endl;
    
    while(!p.empty()){
        std::cout<<p.top()<<" ";
        p.pop();
    }
    std::cout<<std::endl;
    return 0;
}
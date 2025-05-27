#include<iostream>
#include<queue>

int main(){
    std::queue<int>que;
    std::cout<<que.size()<<std::endl;
    que.push(4);
    que.push(5);
    que.push(6);
    std::cout<<que.front()<<std::endl;
    std::cout<<que.back()<<std::endl;
    que.pop();
    std::cout<<que.front()<<std::endl;
    std::cout<<que.empty()<<std::endl;
    std::cout<<que.size()<<std::endl;


}
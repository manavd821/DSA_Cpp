#include<iostream>
#include<stack>

class Queue{
    public:
    std::stack<int>stPush;// for push
    std::stack<int>stPop;// for pop
    Queue(){}
    bool IsEmpty(){
        return (stPush.empty() && stPop.empty());
    }
    void push(int x){
        stPush.push(x);
    }
    int pop(){
        if(IsEmpty()) return 0;
        if(!stPop.empty()){
            int element = stPop.top();
            stPop.pop();
            return element;
        }
        else{
            while(!stPush.empty()){
                stPop.push(stPush.top());
                stPop.pop();
            }
            int element = stPop.top();
            stPop.pop();
            return element;
        }
    }
    int front(){
        if(IsEmpty()) return 0;
        if(stPop.empty()){
             while(!stPush.empty()){
                stPop.push(stPush.top());
                stPop.pop();
            }
        }
        return stPop.top();
    }
};
#include<iostream>
using namespace std;
class Stack{
    int *arr;
    int size;
    int top;

    public:

    bool flag = 1; //if stack is empty then flag = 1
    //initialization with size
    Stack(int size): size(size), top(-1), arr(new int[size]){};

    //push
    void push(int num){
        if(top == size-1) cout<<"Stack overflow!!!"<<endl;
        else{
            top++;
            arr[top] = num;
            cout<<num<<" is succesfully placed inside stack."<<endl;
            flag = 0; //stack is now not empty
        }
    }
    //pop
    void pop(){
        if(top == -1) cout<<"Stack underflow!"<<endl;
        else{
            top--;
            cout<<"Pop opertaion done."<<endl;
            if(top == -1 ) flag = 1;
        }
    }
    //peek value
    int peek(){
        if(top == -1) {
            cout<<"Stack is Empty!"<<endl;
            return -1;
        };
        return arr[top];
    }
    // Is stack an empty?
    int IsEmpty(){
        return top==-1;//if stack is empty->return true
    }
    //what is the size of stack?
    int IsSize(){
        return top+1;
    }
};
int main(){
    Stack A(4);
    // A.push(1);
    // A.pop();
    int value = A.peek();
    if(!A.flag) cout<<value<<endl;
    

}
#include<iostream>
using namespace std;

class complex{
    int real,img;
    public:

    complex(){

    };
    complex(int real,int img){
        this->img=img;
        this->real=real;
    }
    void display(){
        cout<<real<<"+i"<<img<<endl;
    }

    //operator overloading
    complex operator +(complex &C){
        complex ans;
        ans.real=real+C.real;
        ans.img=img+C.img;
        return ans;
    }
};


int main(){
    complex C1(3,4),C2(4,6);
    complex C3= C1 + C2;//same as C1.fun(C2) ->C1 call kare che and C2 as argument jay che
    C3.display();

};
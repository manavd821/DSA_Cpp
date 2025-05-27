#include<iostream>
using namespace std;
class customer{
    int acc,bal;
    string name;

    public:
    //Default constructor
    customer(){
        cout<<"Hello world\n";
    }
    customer(string n,int a){
        name=n;
        acc=a;
    }
    //parameterized constructor
    // customer(string a,int b,int c){
    //     name=a;
    //     acc=b;
    //     bal=c;
    // }
    
    // This pointer
    // customer(string name,int acc,int bal){
    //    this-> name=name;
    //     this->acc=acc;
    //    this-> bal=bal;
    // }

    //Inline Constructor
    //inline keyword is not necessory here=> we need inline keyword when constructor is defined outside the class
    inline customer(string a,int b,int c): name(a),acc(b),bal(c){

    }
    inline customer(string name): name(name){};
    //Copy Constructor
    // customer(customer &B){
    //     name=B.name;
    //     bal=B.bal;
    //     acc=B.acc;
    // }

    //inline copy constructor
    inline customer(customer &C):name(C.name),acc(C.acc),bal(C.bal){

    }

    void display(){
        cout<<name<<" "<<acc<<" "<<bal<<" ";
        return;
    }
};
int main(){
    customer A1;
    customer A2("Manav",123,456);
    customer A3("Rohit",25);
    A2.display();
    A3.display();
    customer A4(A2);
    A4.display();
    customer A5;
    A5=A4;
    A5.display();
    cout<<&A1<<endl;
    customer B("Krsna");
    // cout<<B.name<<endl;

    return 0;
}
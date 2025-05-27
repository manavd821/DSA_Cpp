#include<iostream>
using namespace std;
class customer{
    int data;
    public:
    customer(){
        data=4;
        cout<<"Constructor is "<<data<<endl;
    }
    customer(int m){
        data=m;
        cout<<"Constructor is "<<data<<endl;
    }
    ~ customer(){
        
        cout<<"Destructor is "<<data<<endl;
    }
};
int main(){
    customer A1(1),A2(2),A3(3);
    customer *A4=new customer;
    delete A4;

}
#include<iostream>
using namespace std;
class customer{
    public:
     //Destructor :aa hamesha last ma call thay
     ~customer(){
        cout<<"Destructor is called\n"; 
    }
    customer(){
        cout<<"Constructor is called\n";
    }
};
int main(){
    customer A1;
}

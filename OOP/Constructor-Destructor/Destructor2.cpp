#include<iostream>
using namespace std;
class customer{
    int num;
    public:
    customer(int a){
        this->num=a;
        cout<<"Constructor number "<<num<<endl;;
    }
      //Destructor 
     ~customer(){
        cout<<"Destructor number "<<num<<endl; 
    }
   
};
int main(){
    customer A1(1),A2(2),A3(3);
    customer *A4=new customer(4);
    delete A4;
 }

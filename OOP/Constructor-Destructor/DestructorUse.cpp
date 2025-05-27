#include<iostream>
using namespace std;
class customer{
    public:
     int *ptr,bal;
     customer(int bal)
     {
        ptr=new int;
        *ptr=bal;
        cout<<"value:"<<*ptr<<" address:"<<ptr<<endl;
     }
     ~customer()
     {
        cout<<"deleting dynamically allocated memory..."<<endl;
        delete ptr;
        cout<<"deletion Successful"<<endl;
     }
};
int main(){
    customer A1(5);
}

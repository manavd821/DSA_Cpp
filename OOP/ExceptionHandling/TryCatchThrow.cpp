#include<iostream>
using namespace std;
class customer{
    string name;
    int acc,bal;

    public:

    inline customer(string a,int b,int c):name(a),acc(b),bal(c){

    }
    void deposit(int amount){
        if (amount<=0)  
        throw "amount should be greater than 0\n";//jo throw chale to pachi niche wali statement nahi chale

        bal+=amount;
        cout<<amount<<" ruppes is credited successfully\n"; 
    }

    void withdraw(int amount){
        if (amount>0 && amount<=bal){
            bal-=amount;
            cout<<amount<<" ruppes is debited successfully\n";
        }
        else if(amount<0) throw "amount should be greater than 0\n";
        else throw "Your balance is low";
    }
};
int main(){
    customer C1("Rohit",10,5000);
    
    try{
    C1.deposit(500);
    C1.withdraw(6000);
    C1.deposit(100);
    }
    catch(const char *e){
        cout<<"Exception Occured:"<<e<<endl;
    }
}
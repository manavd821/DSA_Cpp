//static : They are attributes of classes or class member
//static member function
//Encapsulation ama j avi gyu
#include<iostream>
using namespace std;
class customer{
    string name;
    int acc,bal;
    static int total_customer;//staic attributes of classes and they are formed once autometically with forming of class 

    static int total_balance;
    public:
    // static int total_customer;//To excess without object
    inline customer(string a,int b,int c): name(a),acc(b),bal(c){   //Encapsulation 
       total_customer++; 
       total_balance+=bal;
    }

    void display(){
        cout<<name<<" "<<acc<<" "<<bal<<" "<<total_customer<<endl;
        return;
    }

    void display_total(){
        cout<<total_customer<<endl;
        cout<<total_balance<<endl;

    }
    //static member function
    //It can only excess to static taype data like total_customer, But can't excess acc,name,bal
    static void acestatic(){
        cout<<"Total number of customer are "<<total_customer<<endl;
        cout<<"Total balance : "<<total_balance<<endl;
    }

    void deposit(int amount){    //ama apde checkpoints rakhi sakay jethi user faltu value nahi nakhi sakay
        if(amount>0){
            bal+=amount;
            total_balance+=amount;
            cout<<"You have deposited "<<amount<<" amount\n";
            // withdraw(5);
            return;
        }
    }
    void withdraw(int amount){
        if(amount<=bal && amount>0){
            bal-=amount;
            total_balance-=amount;
            cout<<"You have withdrawed "<<amount<<" amount\n";
        }
        else cout<<"Your balance is low"<<endl;
    }
};
    //To initialize total_customer
    int customer::total_customer=0;//"::" ->This is known as resolution operator
    int customer::total_balance=0;

int main(){
    customer A1("Rohit",1,1000),A2("Mohit",2,2000);
    // A1.display(),A2.display();
    customer A3("Mohan",3,3000);
    // A3.display();
    // A2.display_total();
    // customer::total_customer=5;//To excess without object
    A1.deposit(2000);
    A2.withdraw(1000);
    A1.display(),A2.display();
    // A1.display_total();

    
    customer::acestatic();//static member function call
}
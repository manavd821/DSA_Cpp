#include<iostream>
using namespace std;
class student{
    public:
    string name,grade;
    int age;
    int roll_number;
    public:
    void setname(string n){  //assigning value of name
        if(n.size()==0)
        {
            cout<<"Enter name"<<endl;
            return;
        }
        name=n;
    }
    void setage(int n){ //assigning value of age
        age=n;
    }
    void setroll(int n){ //assigning value of roll
        roll_number=n;
    }
    void setgrade(string s){//assigning grade
        grade=s;
    }
    void getname(){ //printing output
        cout<<name<<endl;
    }
    void getage(){
        cout<<age<<endl;
    }
    int getroll(){
        return roll_number;
    }
    string getgrade(int pin){
        if(pin==123) return grade;
        else return "Enter correct pin";
    }
};

// class ok{
//     char ch;
//     int a;
//     char b;
// };
int main(){
    student s1;
    // s1.name="Manav";
    // s1.age=20;
    // s1.roll_number=38;
    // cout<<s1.name<<" "<<s1.age<<endl;
    s1.setname("Manav");
    s1.setage(20);
    s1.setroll(38);
    s1.setgrade("A+");
    s1.getname();
    s1.getage();
    s1.getgrade(234);
    cout<<s1.getroll()<<endl;
    cout<<s1.getgrade(123);

    student s2;
    s2.name="manabv";

    // ok obj1;
    // cout<<sizeof(obj1)<<endl;
}
#include<iostream>
using namespace std;
class person{
    protected:
    string name;

    public:
    person(){
        cout<<"Dadda\n";
    }
    void intro(){
        cout<<"Hello my name is: "<<name<<endl;
    }
};
class employee:public person{
    protected:
    int salary;

    public:
    employee(){
        cout<<"pappa\n";
    }
    void monthly_salary(){
        cout<<"My monthly salary is: "<<salary<<endl;
    }
};
class manager:public employee{
    public:
    string department;
    manager(){
        cout<<"lallu\n";
    };
    manager(string name,int salary,string department){
        this->name=name;
        this->salary=salary;
        this->department=department;
    }
    void work(){
        cout<<"I am leading the department "<<department<<endl;
    }
};
int main(){
    manager A1("Rohit",2000000000,"CS");
    A1.intro();
    A1.monthly_salary();
    A1.work();
    manager A6;
    
}
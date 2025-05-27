//which constructor will called 1st? parent or child
//which Destructor will called 1st? parent or child
#include<iostream>
using namespace std;
class human{
    protected:
    string name;
    int age,weight;

    public:

    human(){
        cout<<"human constructor is called"<<endl;
    }
    ~human(){
        cout<<"human destructor is called"<<endl;
    }
    human(string name,int age){
        this->name = name;
        this->age=age;
    }
    void display(){
        cout<<name<<" "<<age<<endl;
    }

};
class student:private human{
    private:
    int roll,fees;

    public:
    student(){
        cout<<"student constructor is called"<<endl;
    }
    ~student(){
        cout<<"student destructor is called"<<endl;
    }

    student(string name,int age,int roll,int fees):human(name,age){
        this->roll=roll;
        this->fees=fees;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<roll<<" "<<fees<<endl;
    }
};

int main(){
    student A1;
    student A2("rohit",24,54,7000);
    A2.display();
}
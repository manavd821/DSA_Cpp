#include<iostream>
using namespace std;
class human{
    protected:
    string name;
    int age,weight;

    public:
    void work(){
        cout<<"I am working"<<endl;
    }
};
class student:private human{
    private:
    int roll,fees;

    public:
    student(string name,int age,int weight,int roll,int fees){
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll=roll;
        this->fees=fees;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<weight<<" "<<roll<<" "<<fees<<endl;
    }
};
class teacher:public human{
    private:
    int salary;
};

int main(){
    student A1("Rohit",20,55,38,12500);
    A1.display();
    teacher A2;
    A2.work(); 
}
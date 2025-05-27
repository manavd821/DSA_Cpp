#include<iostream>
using namespace std;
class human{//parent class child class ni upper declare hovi joie. define tu niche pan kari ske.
    protected:
    string name;
    int age,weight;

    public:
    void work(){
        cout<<"I am working"<<endl;
    }
    human(){};
    human(string name,int age):name(name),age(age){};

    
};
class student:private human{
    private:
    int roll,fees;

    // private://avu thayu hase
    // string name;
    // int age,weight;

    public:
    student(string name,int age,int weight,int roll,int fees): human(name,age)
    {
        this->weight=weight;
        this->roll=roll;
        this->fees=fees;
    }
    
//    void fun(string n,int a,int b){
//         name=n;
//         age=a;
//         weight=b;
//     }
    void display(){
        cout<<name<<" "<<age<<" "<<weight<<" "<<roll<<" "<<fees<<endl;
    }
};
class teacher:public human{
    private:
    int salary;

    // protected://avi rite thayu hase
    // string name;
    // int age,weight;

    public:
    void work(){
        cout<<"I am working"<<endl;
    }
};

int main(){
    student A1("Rohit",20,55,38,12500);
    A1.display();
    teacher A2;
    A2.work(); 
}
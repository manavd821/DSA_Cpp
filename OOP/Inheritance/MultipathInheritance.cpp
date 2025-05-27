#include<iostream>
using namespace std;
class human{
    public:
    string name;
    void display(){
        cout<<"My name is "<<name<<endl;
    }
    human()
    {
        cout<<"human-constructor is called\n";
    }
    ~human()
    {
        cout<<"human-destructor is called\n";
    }
};
class engeneer:public virtual human{
    public:
    string specialization;

    void work(){
        cout<<"My specialization is in "<<specialization<<" department\n";
    }
    engeneer()
    {
        cout<<"engeneer-constructor is called\n";
    }
    ~engeneer()
    {
        cout<<"engeneer-destructor is called\n";
    }
};
class youtuber:public virtual human{
    public:
    int subscriber;

    void contentcreator(){
        cout<<"My number of subscriber are "<<subscriber<<endl;
    }
    youtuber()
    {
        cout<<"youtuber-constructor is called\n";
    }
    ~youtuber()
    {
        cout<<"youtuber-destructor is called\n";
    }
};
class codeteacher:public youtuber , public engeneer{//Je pahela parent class lakhay te constructor pahela call thay
    public:
    int salary;

    codeteacher(string name,int subscriber,string specialization,int salary){
        this->name=name;
        this->subscriber=subscriber;
        this->specialization=specialization;
        this->salary=salary;
    }
    void display(){
        cout<<name<<" "<<subscriber<<" "<<specialization<<" "<<salary<<endl;
    }
    codeteacher()
    {
        cout<<"code-constructor is called\n";
    }
    ~codeteacher()
    {
        cout<<"code-destructor is called\n";
    }

};
int main(){
    // codeteacher A1("Rohit",2000000,"CSE",300000000);
    // A1.display();
    codeteacher A2;
    

}

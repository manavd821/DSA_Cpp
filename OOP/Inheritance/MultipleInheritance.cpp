#include<iostream>
using namespace std;
class engeneer{
    public:
    string specialization;

    engeneer(){
        cout<<"engeneer constructor is called\n";
    }

    void work(){
        cout<<"My specialization is in "<<specialization<<" department\n";
    }
};
class youtuber{
    public:
    int subscriber;

    youtuber(){
        cout<<"Youtuber constructor is called\n";
    }

    void contentcreator(){
        cout<<"My number of subscriber are "<<subscriber<<endl;
    }
};
class codeteacher:public youtuber , public engeneer{//Je pahela parent class lakhay te constructor pahela call thay
    public:
    string name;

    codeteacher(){
        cout<<"codeteacher constructor is called\n";
    }

    codeteacher(string name,int subscriber,string specialization){
        this->name=name;
        this->subscriber=subscriber;
        this->specialization=specialization;
    }

    void display(){
        cout<<name<<" "<<subscriber<<" "<<specialization<<endl;
        work();
        contentcreator();
    }
};
int main(){
    codeteacher A1("Rohit",2000000,"CSE");
    A1.display();

}

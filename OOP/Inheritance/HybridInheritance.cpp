#include<iostream>
using namespace std;
class student{
    public:
    void print(){
        cout<<"Hello student\n";
    }
};
class male{
    public:
    void maleprint(){
        cout<<"Hello male\n";
    }
};
class female{
    public:
    void femaleprint(){
        cout<<"Hello female\n";
    }
};
class boy:public student,public male{
    public:
    void boyprint(){
        cout<<"Hello boy\n";
    }
};
class girl:public student,public female{
    public:
    void girlprint(){
        cout<<"Hello girl\n";
    }
};

int main(){
    girl G1;
    G1.print();
    G1.girlprint();
    boy B1;
    B1.print();
    B1.boyprint();
    
}
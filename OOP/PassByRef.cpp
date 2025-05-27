#include<iostream>
using namespace std;
class student{
    public:
    string name,grade;
    int age;
    int roll;
};

 void change(student &x){
        x.name="Krsna";
        x.roll=50;
        return;
    }
int main(){
    student A1;
    A1.name="Manav";
    A1.roll=38;
    cout<<A1.name<<" "<<A1.roll<<endl;
    change(A1);
    cout<<A1.name<<" "<<A1.roll<<endl;


}

#include<iostream>
#include<vector>
using namespace std;
class animal{
    public:
   virtual void speak(){
        cout<<"HuHu\n";
    }
    
};
class dog :public animal{
    public:
    void speak(){
        cout<<"Bark\n";
    }
    
};
class cat :public animal{
    public:
    void speak(){
        cout<<"Meow\n";
    }
};

class any{
     //pure virtual function
   virtual void ok()=0;//also called as abstract class//"any" class ka koi object create nahi kar skate
   //jab bhi class create karna ho but koi object create na ho isske liye ye use hota hai
};


int main(){
    // animal *p=new dog();
    // p=new dog();
    // p->speak();
    

    animal *p;
    vector<animal*>animals;
    animals.push_back(new dog());
    animals.push_back(new cat());
    animals.push_back(new animal());
    animals.push_back(new dog());
    animals.push_back(new cat());

    for(int i=0;i<animals.size();i++){
        p=animals[i];
        p->speak();
    }
};

#include<iostream>
using namespace std;
class customer{
    string name;
    int acc,bal;
    int sum=0;

    public:
    // static int total_customer;//To excess without object
    inline customer(string a,int b,int c): name(a),acc(b),bal(c){   //Encapsulation 
       sum++;
       cout<<sum<<endl;
    }

    
};
    

int main(){
    customer A1("Krsna",20,34),A2("Hare",3,4);
    
}
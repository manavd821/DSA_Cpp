#include<iostream>
using namespace std;
class area{
    public:
    int calculatearea(int r){
        int areaa=3.14*r*r;
        return areaa;
    }
    int calculatearea(int a,int b){
        int areaa=a*b;
        return areaa;
    }
};
int main(){
    area A1,A2;
    cout<<A1.calculatearea(4)<<endl;
    cout<<A1.calculatearea(4,5)<<endl;

    
}
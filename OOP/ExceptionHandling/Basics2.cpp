
#include<iostream>
#include<exception>
using namespace std;
int main(){
    try{
    int *p=new int(100000000000000000);
    cout<<"Memory allocation is successful";
    delete []p;
    }
    catch(const exception &e){
        cout<<"Exception Occured: "<<e.what()<<endl;
    }
}
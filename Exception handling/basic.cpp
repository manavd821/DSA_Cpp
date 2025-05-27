#include<iostream>
#include<exception>
using namespace std;
int main()
{
    try{
        int *n=new int[10000000000];
        cout<<"Memory yes\n"<<endl;
        delete []n;
    }catch(const exception &e){
        cout<<"Exception bhai: "<<e.what()<<endl;
    }
    
    return 0;
}

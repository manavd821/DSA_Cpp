#include<iostream>
#include<string>
using namespace std;
int main(){
    
//pointers:
    // int a=5;
    // int *b=&a;
    // char ch='a';
    // char *c=&ch;

    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<b<<endl;
    // cout<<*b<<endl;
    // cout<<b<<endl;
    // cout<<&b<<endl;

//Array pointer:
    // int arr[5]={1,2,3,4,5};
    // int *o=&arr[0];
    // int *o1=&arr[1];

    // cout<<o<<endl;
    // cout<<*o+2<<endl;
    // cout<<o+1<<endl;
    // cout<<1+o<<endl;
    // cout<<*o+1<<endl;
    // cout<<arr<<endl;
    // cout<<arr+1<<endl;
    // cout<<arr<<endl;
    // cout<<o[1]<<endl;

    // cout<<sizeof(b)<<endl;
    // cout<<sizeof(c)<<endl;

    // for(int i=0;i<5;i++){
    //     cout<<*o<<endl;
    //     o++;
    // }

//Character array pointer:
    // char brr[5]="1234";
    //  char *ptr=brr;
    // void *ptr1=brr;

    // ptr1=brr;
    // ptr1=(void*)ptr;

    // cout<<(void*)brr<<endl;
    // cout<<ptr<<endl;
    // cout<<ptr1<<endl;

//character pointer:
    // char name='a';
    // char *ptr=&name;
    // cout<<ptr<<endl;
    // cout<<(void*)ptr<<endl;
    // cout<<(void*)&name<<endl;
  
 
    char a[]="Krsn";
  string s="Radha";
  cout<<sizeof(a)<<endl;
  cout<<sizeof(s)<<endl;
  cout<<s.size()<<endl;
  cout<<s.capacity()<<endl;
    

}
#include<iostream>
using namespace std;
int main(){
    char a[]="Manav";
    int i=0;
    while(a[i]!='\0'){
        cout<<a[i];
        i++;
    }
    cout<<endl;
    string s="Krsna";
    cout<<s<<endl;

    // string b;
    // cin>>b;// space ave tya atki jay
    // cout<<b<<endl;

    string c;
    getline(cin,c);//space ave but enter ave tya atki jay
    cout<<c<<endl;
    cout<<c.size()<<endl;

    // string s3=s+c;
    /*or*/ string s3=s.append(c); 
    cout<<s3<<endl;

    s.push_back(' ');
    s.push_back('K');
    s.push_back('r');
    s.push_back('s');
    s.push_back('n');
    s.push_back('a');

    cout<<s<<endl;

    s.pop_back();
    s.pop_back();
    s.pop_back();
    s.pop_back();
    s.pop_back();
    s.pop_back();

    cout<<s<<endl;

    //escape character
    string s1="Manav is a \"good\" boy";
    cout<<s1<<endl;
}
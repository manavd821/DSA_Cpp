#include<iostream>
using namespace std;
void toh(int n,int source,int help,int dest)
{
    if(n==1)
    {
        cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<dest<<endl;
        return;
    }
    toh(n-1,source,dest,help);
    cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<dest<<endl;
    toh(n-1,help,source,dest);
}
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    toh(n,1,2,3);
}
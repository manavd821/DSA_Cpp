#include<iostream>
#include<vector>
#include<climits>
#include<string>
using namespace std;

void EvenNumber(int n){
    if(n<0) return;
    EvenNumber(n-2);
    cout<<n<<" "; 
}
int fact(int n){
    if(n==1) return 1;
    return n*fact(n-1);
}
int minElement(int arr[],int n){
    if(n==0) return arr[0];
    return min(minElement(arr,n-1),arr[n]);
}
int main(){
    // int n;
    // cout<<"Enter number of term:";
    // cin>>n;
    // // EvenNumber(n);
    // if(n%2!=0){
    //     EvenNumber(n-1);
    // }
    // else{
    //     EvenNumber(n);
    // }
    int arr[]={4,6,2,3,8};
    int n=5;
    cout<<minElement(arr,n-1);
}
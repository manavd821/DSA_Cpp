#include<iostream>
#include<vector>
using namespace std;
int f(vector<int>&arr,int idx,int target)
{
    if(target<0) return 0;
    // if(target==0) return 1;
    if(idx==arr.size()){
        return target==0;
    }
    return f(arr,idx,target-arr[idx])+f(arr,idx+1,target);
}
int main(){
    vector<int>arr={2,3,4,0};
    cout<<f(arr,0,6)<<endl;
}
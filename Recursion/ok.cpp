#include<iostream>
#include<vector>
using namespace std;
void sum(vector<int>&arr,int idx,int s,vector<int>&ans)
    {
        if(idx==arr.size())
        {
            ans.push_back(s);
            return;
        }
        sum(arr,idx+1,arr[idx]+s,ans);
        sum(arr,idx+1,s,ans);
        return;
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int>ans;
        sum(arr,0,0,ans);
        return ans;
    }
int main(){
    vector<int>arr={3,6,4,5};
    vector<int>ans=subsetSums(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}
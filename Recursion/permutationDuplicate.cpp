#include<iostream>
#include<vector>
using namespace std;
void perm(vector<int>&arr,vector<vector<int>>&ans,int idx)
    {
        if(idx==arr.size())
        {
            ans.push_back(arr);
            return;
        }
        vector<bool>visited(21,0);
        for(int i=idx;i<arr.size();i++)
        {
            if(!visited[arr[i]+10]){
                swap(arr[idx],arr[i]);
                perm(arr,ans,idx+1);
                swap(arr[idx],arr[i]);
                visited[arr[i]+10]=1;
            }
        }
        return;
    }
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>>ans;
    perm(nums,ans,0);
    return ans;
}
int main(){
    vector<int>arr={1,1,2,2,2};
    vector<vector<int>>ans=permute(arr);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
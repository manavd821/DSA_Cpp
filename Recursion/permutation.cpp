#include<iostream>
#include<vector>
using namespace std;
void perm(vector<int>&arr,vector<vector<int>>&ans,vector<int>&temp,vector<bool>&visited)
{
    if(temp.size()==arr.size())
    {
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<visited.size();i++)
    {
        if(!visited[i])
        {
            visited[i]=1;
            temp.push_back(arr[i]);
            perm(arr,ans,temp,visited);
            temp.pop_back();
            visited[i]=0;
        }
        
    }
    return;
}
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>>ans;
    vector<int>temp;
    vector<bool>visited(nums.size(),0);
    perm(nums,ans,temp,visited);
    return ans;
}
int main(){
    vector<int>arr={1,2,3};
    vector<vector<int>>ans=permute(arr);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
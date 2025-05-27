#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextLargerElement(vector<int> &arr)
{
    //methode 1:
    stack<int>st;
        vector<int>ans(arr.size(),-1);
        for(int i=0; i<arr.size(); i++){
            while(!st.empty() && arr[i] > arr[st.top()]){
                ans[st.top()] = arr[i];
                st.pop();
            }
            st.push(i);
        }
        if(!st.empty()){
            for(int i=0; i<st.top(); i++){
                while(!st.empty() && arr[i] > arr[st.top()]){
                    ans[st.top()] = arr[i];
                    st.pop();
                }
            }
        }
    return ans;
    // methode 2:
    // vector<int> ans(arr.size(), -1);
    // stack<int> st;
    // st.push(arr[0]);
    // int count = 0;
    // for (int i = 1; i < arr.size(); i++)
    // {
    //     if (arr[i] < st.top())
    //     { // next element arr[i] nano che preveous karta(st.top())
    //         st.push(arr[i]);
    //         count++;
    //     }
    //     else
    //     { // next moto che arr[i] > st.top()
    //         int idx = count;
    //         while (!st.empty() && st.top() < arr[i])
    //         {
    //             if (ans[idx] != -1)
    //             { // array ma apde already nakhyu che-> tene nahi chhedvu
    //                 idx--;
    //                 continue;
    //             }
    //             else
    //             {
    //                 ans[idx] = arr[i];
    //                 idx--;
    //                 st.pop();
    //             }
    //         }
    //         // stack khali hase hve
    //         st.push(arr[i]);
    //         count++;
    //     }
    // }
    // if(!st.empty()){
    //     for(int i = 0; i< arr.size(); i++){
    //         int idx = count;
    //         while(arr[i] > st.top()){
    //             if(ans[idx] != -1){ // array ma apde already nakhyu che-> tene nahi chhedvu
    //                 idx--;
    //                 continue;
    //             }
    //             ans[idx] = arr[i];
    //             idx--;
    //             st.pop();
    //         }
    //     }
    // }
    // return ans;
}
int main()
{
    vector<int>arr = {0,2,3,1,1};
    vector<int>ans = nextLargerElement(arr);
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
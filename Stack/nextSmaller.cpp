#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr)
{
    // code here
    stack<int>st;
    vector<int>ans(arr.size(),-1);
    int count= 0;
    // for(int i=0; i< arr.size(); i++){
    //     if(st.empty()) {
    //         st.push(arr[i]);
    //     }
    //     else if(arr[i] > st.top()){
    //         st.push(arr[i]);
    //         count++;
    //     }
    //     else{//arr[i] < st.top()
    //         int idx = count;
    //         while(!st.empty() && arr[i] <= st.top()){
    //             if(ans[idx] != -1) {
    //                 idx--;
    //                 continue;
    //             };
    //             ans[idx] = arr[i];
    //             idx--;
    //             st.pop();
    //         }
    //         st.push(arr[i]);
    //         count++;
    //     }   
    // }
    for(int i=0; i< arr.size(); i++){
        if(st.empty()) {
            st.push(arr[i]);
            continue;
        }
        else if(arr[i] < st.top()){
            int idx = count;
            while(!st.empty() && arr[i] < st.top()){
                if(ans[idx] != -1) {
                    idx--;
                    continue;
                }
                ans[idx] = arr[i];
                idx--;
                st.pop();
            }
        }
        st.push(arr[i]);
        count++;
    }
    if(!st.empty()){
        for(int i=0; i< arr.size(); i++){
                int idx = count;
                while(!st.empty() && arr[i] < st.top()){
                    if(ans[idx] != -1) {
                        idx--;
                        continue;
                    }
                    ans[idx] = arr[i];
                    idx--;
                    st.pop();
                }
        }
    }
    return ans;
}
int main()
{
    vector<int>arr = {7,9,12,10,14,8,3,6,9};
    vector<int>ans = nextSmallerElement(arr);
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
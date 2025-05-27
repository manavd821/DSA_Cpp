#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> largestRectangleArea(vector<int>& arr) {
        stack<int>st;
        //find next smallest in right array
        vector<int>right(arr.size(), -1);
        for(int i=0; i<arr.size();i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                right[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            right[st.top()] = arr.size() - st.top();
            st.pop();
        }
        //find next smallest on left
        vector<int>left(arr.size(),-1);
        for(int i=arr.size()-1; i>=0; i--){
            while(!st.empty() && arr[st.top()] > arr[i]){
                left[st.top()] = st.top() - i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            left[st.top()] = st.top() + 1;
            st.pop();
        }
        //find area array
        int maxi = -1;
        vector<int>area(arr.size());
        for(int i=0; i<arr.size();i++){
            area[i] = ( arr[i] * (left[i] + right[i] - 1)); //khud 2 vaar ave aetle -1
        }
        return area;
}
int main()
{
    vector<int>arr = {2,1,5,6,2,3};
    vector<int>ans = largestRectangleArea(arr);
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
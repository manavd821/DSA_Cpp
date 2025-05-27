#include<iostream>
#include<vector>
using namespace std;
int pivoteIndex(vector<int>&arr,int start,int end){
    int pos=start;
    for(int i=start;i<=end;i++)
    {
        if(arr[i]<=arr[end])
        {
            swap(arr[pos],arr[i]);
            pos++;
        }
    }
    return pos-1;
}
void quickSort(vector<int>&arr,int start,int end){
    if(start>=end)
    {
        return;
    }
    int pivote=pivoteIndex(arr,start,end);
    quickSort(arr,start,pivote-1);
    quickSort(arr,pivote+1,end);
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    quickSort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
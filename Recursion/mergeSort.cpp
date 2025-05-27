#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& arr,int start,int mid,int end)
    {
        vector<int>temp(end-start+1);
        int idx=0,left=start,right=mid+1;
        while(left<=mid && right<=end)
        {
            if(arr[left]<=arr[right])
            {
                temp[idx]=arr[right];
                right++,idx++;
            }
            else
            {
                temp[idx]=arr[left];
                left++,idx++;
            }
        }
        //left array remaining element
        while(left<=mid)
        {
            temp[idx]=arr[left];
            left++,idx++; 
        }
        //right array remaining element
        while(right<=end)
        {
            temp[idx]=arr[right];
            right++,idx++;
        }
        //copy sorted array
        idx=0;
        while(start<=end)
        {
            arr[start]=temp[idx];
            start++,idx++;
        }
        return;
    }
void mergeSort(vector<int>& arr,int start,int end)
{
        if(start==end)
        {
            return;
        }
        int mid=start+(end-start)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
        return;
}
int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    mergeSort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
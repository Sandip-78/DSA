#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int m, vector<int>& brr, int n) {
    vector<int> ans;
    int i=0;
    int j=0;
    while(i<m && j<n){
        if(arr[i] <= brr[j]){
            ans.push_back(arr[i]);
            i++;
        }else{
            ans.push_back(brr[j]);
            j++;
        }
    }

    while(j<n){
        ans.push_back(brr[j]);
        j++;
    }

    while(i<m){
        ans.push_back(arr[i]);
        i++;
    }      

    for(int i=0;i<m+n;i++){
        arr[i]=ans[i];
    }
}

int main(){
    vector<int> arr = {1,3,5};
    vector<int> brr = {2,4,6};
    merge(arr,arr.size(),brr,brr.size());

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
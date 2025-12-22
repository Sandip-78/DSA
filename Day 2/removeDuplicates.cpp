#include<iostream>
#include<vector>
using namespace std;

vector<int> fun(vector<int> &arr){
    int i=0,j=i+1;
    vector<int> ans;
    int count=0;
    for(int k=0;i<arr.size();k++){
        if(arr[i]!= arr[j]){
            ans.push_back(arr[i]);
            count++;
        } 
        i++;
        j++;
    }
     cout<<count;       
    return ans;
}

int main(){
    vector<int> arr = {1,1,1,2,2,2,3,3,3};
    vector<int> result = fun(arr);

    for(int i=0;i<arr.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
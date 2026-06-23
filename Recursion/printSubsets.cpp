#include<iostream>
#include<vector>
using namespace std;

void fun(vector<int> &arr,vector<int> &ans,int i){

    if(i == arr.size()){
        for(auto x : ans){
            cout<<x<<" ";
        }
        cout<<endl;
        return;
    }

    //include
    ans.push_back(arr[i]);
    fun(arr,ans,i+1);

    ans.pop_back(); //backtrack
    //exclude
    fun(arr,ans,i+1);

}

int main(){

    vector<int> arr = {1,2,3};  
    vector<int> ans;

    fun(arr,ans,0);

    return 0;
}
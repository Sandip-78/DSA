#include<iostream>
#include<vector>
using namespace std;

bool fun(vector<int> &arr,int i){
    if(i==arr.size()-1 || i==arr.size()){
        return true;
    }

    bool ans;
    if(arr[i] < arr[i+1]) {
        ans = fun(arr,i+1);
    }else{
        return false ;
    } 

    return ans;
}

int main(){

    vector<int> arr = {1,2,3};  

    cout<< fun(arr,0);

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

void fun(vector<int> &v,int k){
    vector<int> temp(v.size());
    for(int i=0;i<v.size();i++){
        temp[(i+k)%v.size()] = v[i];
    }

    for(int x : temp){
        cout<<x<<" ";
    }
}

int main(){

    vector<int> v={1,2,3,4,5,6,7};
    fun(v,3);
    return 0;
}

// Time complexity : o(n)
// Space complexity : o(n)
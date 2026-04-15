#include<iostream>
#include<vector>
#include<map>
using namespace std;

void fun(vector<int> &a){
    map<int,int> mpp;
    for(int i=0;i<a.size();i++){
        mpp[a[i]]++;
    }

    for(auto it : mpp){
        if(it.second == 1){
            cout<<it.first;
        }
    }
}

int main(){

    vector<int> a={1,2,2,3,3};
    fun(a);

    return 0;
}

// time complexity : 
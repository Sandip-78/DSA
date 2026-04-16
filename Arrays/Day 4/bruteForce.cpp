#include<iostream>
#include<vector>
using namespace std;

void fun(vector<int> &v){
    for(int i=0;i<v.size();i++){
        int count =0;
        for(int j=0;j<v.size();j++){
            if(v[i]==v[j]) count++;
        }
        if(count > (v.size()/2)) cout<<v[i];
    }
}

int main(){

    vector<int> v ={2,2,1,1,1,2,2};
    fun(v);
    return 0;
}

// TC : o(n2)
// SC : o(1)
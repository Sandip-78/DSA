#include<iostream>
#include<vector>
using namespace std;

void fun(vector<int> &v){
    vector<int> temp;
    for(int i=1;i<v.size();i++){
        if(v[i]!=v[i-1]){
            temp.push_back(v[i]);
        }
    }

    // Copy back to original array
        for(int j = 0; j < temp.size(); j++){

            v[j] = temp[j];
        }

    for(auto k : v){
        cout<<k<<" ";
    }

    cout<<temp.size();
}

int main(){

    vector<int> vec = {0,0,1,1,1,2,2,3,3,4};
    fun(vec);
    return 0;
}

// TC : O(n)
// SC : O(n)
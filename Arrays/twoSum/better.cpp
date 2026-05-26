#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void fun(vector<int> &vec,int target){
    unordered_map<int,int> f;
   

    for(int i=0;i<vec.size();i++){
        int a = vec[i];
        int b = target - a;
        if(f.find(b) != f.end()){
            cout<<"Found "<<b<<" and "<<a;
        }
        f[vec[i]] = i;
    }
}

int main(){

    vector<int> vec={7,11,2,5};
    int target = 9;
    fun(vec,target);
    return 0;
}

// TC : O(n2)
// SC : O(1)
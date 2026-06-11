#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> prevGreater(vector<int> &a){
    stack<int> st ;
    vector<int> res;

    for(int i=0;i<a.size();i++){

        while(!st.empty() && st.top()<=a[i]){
            st.pop();
        }
        
        if(st.empty()){
            res.push_back(-1);
        }else{
            res.push_back(st.top());
        }
        st.push(a[i]);
    }

    return res;
    
}

int main(){
    
    vector<int> a = {4,1,2,5,3};

    vector<int> ans = prevGreater(a);
    for(auto x : ans){
        cout<<x<<" ";
    }
    return  0;
}

// TC : O(n) So total pushes = N and total pops = N.
// SC : O(n)
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void slargest(vector<int> &v){

    sort(v.begin(),v.end());
    int n = v.size();
    int largest = v[n-1];
    int sbig;

    for(int i=v.size()-2;i>=0;i--){
        if(v[i] != largest){
            sbig = v[i];
            break;
        }
    }
    cout<<sbig;

    // Time complexity = n log n + n;

}

int main(){

    vector<int> v={1,2,4,7,7,5};
    slargest(v);

    return 0;
}
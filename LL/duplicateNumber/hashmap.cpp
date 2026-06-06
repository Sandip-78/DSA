#include<iostream>
#include<unordered_map>
using namespace std;


int main() {

    int a[5]={4,1,5,2,2};
    int n = sizeof(a)/sizeof(a[0]);
    unordered_map<int,int> f;
    for(int i=0;i<n;i++){
        f[a[i]]++;
    }

    for(auto x : f){
        if(x.second >1){
            cout<<x.first;
        }
    }

    return 0;
}

// TC : O(n)
// SC : O(n) // so used slow and fast pointer approach for this which is optimal and it is also known as floyd's cycle algorithm
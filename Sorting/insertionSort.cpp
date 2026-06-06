#include<iostream>
using namespace std;

int main(){
    int a[5]={4,1,5,3,2};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=1;i<n;i++){
        int cur = a[i];
        int prev = i-1;
        while(prev>=0 && a[prev]>cur){
            a[prev+1] = a[prev];
            prev--;
        }
        a[prev+1] = cur;
    }

    for(auto x : a){
        cout<<x<<" ";
    }
    return 0;
}
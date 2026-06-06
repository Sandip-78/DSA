#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int a[5]={4,1,3,2,5};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;i++){
        bool isSwap = false;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) {
            return;
        }
    }

    for(auto x: a){
        cout<<x<<" ";
    }
    return 0;
}
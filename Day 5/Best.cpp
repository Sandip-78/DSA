#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n =8;
    int a[n] = {2,0,2,0,1,0,0,1};
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    }
    


    for(int i=0;i<n;i++){
        cout<<a[i] <<" ";
    }
    return 0;
}
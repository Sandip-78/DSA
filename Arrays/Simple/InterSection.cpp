#include<iostream>
using namespace std;

void fun(int a[],int b[],int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j]) cout<<a[i]<<" ";
        }
    }
}

int main(){

    int a[5]={8,2,4,1,9};
    int b[5]={2,3,7,8,1};

    fun(a,b,5);

    return 0;
}
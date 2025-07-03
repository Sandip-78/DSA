#include<iostream>
using namespace std;

void fun(int a[],int n){

    for(int i=0;i<n;i++){
        a[i] += 2;
    }
}

int main(){

    int a[5]={1,2,3,4,5};

    fun(a,5);

    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

//array is passed by refernce
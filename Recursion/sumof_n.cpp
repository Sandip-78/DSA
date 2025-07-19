#include<iostream>
using namespace std;

int print(int n){
    if(n==0) return 0;
    else return n+ print(n-1);
}

int main(){

    int n;
    cout<<"The enter the n : ";
    cin>>n;
    cout<<"print : "<<print(n);
    return 0;
}
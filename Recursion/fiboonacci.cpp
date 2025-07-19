#include<iostream>
using namespace std;

int fun(int n){

    if(n<=1) return n;
    int last,slast;
    last = fun(n-1);
    slast = fun(n-2);
    
    return last + slast;

}

int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"The number is : "<<fun(n);

}
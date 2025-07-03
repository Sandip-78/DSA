#include<iostream>
using namespace std;

int fact(int n){

    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}

int main(){

    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;

    int a= fact(n);
    int b= fact(r);
    int c= fact(n-r);

    int bc = a/(b*c); 
    cout<<"The answer is : "<<bc;

    return 0;
}
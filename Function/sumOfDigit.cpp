#include<iostream>
using namespace std;

void sum(int n){

    int sum=0,ld;
    while(n>0){
        ld=n%10;
        n=n/10;
        sum = sum + ld; 
    }
    cout<<"Sum is : "<<sum;
}

int main(){

    int n;
    cout<<"Enter N : ";
    cin>>n;

    sum(n);

    return 0;
}
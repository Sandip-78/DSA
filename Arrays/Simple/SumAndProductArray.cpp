#include<iostream>
using namespace std;

int sum(int a[],int n){

    int sum=0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    return sum;
}

int pro(int a[],int n){

    int pro=1;
    for(int i=0;i<n;i++){
        pro *= a[i];
    }
    return pro;
}

int main(){

    int a[5]={1,2,3,4,5};

    cout<<"Sum is :"<<sum(a,5)<<endl;
    cout<<"Product is : "<<pro(a,5)<<endl;
    return 0;
}
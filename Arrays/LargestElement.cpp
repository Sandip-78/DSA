#include<iostream>
using namespace std;

int main(){

    int a[5]={3,2,1,5,2};
    int largest = a[0];

    for(int i=0;i<5;i++){
        if(a[i]>largest){
            largest = a[i];
        }
    }

    cout<<"Largest Number  : "<<largest;

    return 0;
}
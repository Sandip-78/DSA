#include<iostream>
using namespace std;

int fun(int a[],int s , int key){

    for(int i=0;i<s;i++){
        if(a[i] == key){
            return i;
        }
    }

    return -1;
}

int main(){

    int a[]={4,2,7,1,2,5,8};
    int key = 8;

    cout<<"Element found at index : "<<fun(a,7,15);
    return 0;
}
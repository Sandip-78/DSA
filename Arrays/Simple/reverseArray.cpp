// 2 pointer approach
#include<iostream>
using namespace std;

void fun(int a[],int n){

    // int j=n-1;
    // for(int i=0;i<n;i++){
    //     a[i]=a[j];
    //     j--;
    // }
    int start =0 , end= n-1;
    while(start<=end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
}

int main(){

    int a[]={1,2,3,4,5,6,7};

    fun(a,7);

    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
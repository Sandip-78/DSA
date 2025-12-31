#include<iostream>
using namespace std;

void fun(int a[],int n){

    for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]) {
                count++;
            }
        }
        if(count == 1){
            cout<< a[i]<<" ";
        }
    }
}

int main(){

    int a[9]={1,1,1,2,2,3,4,5,6};

    cout<<"Unique Number in array is :\n";
    fun(a,9);

    return 0;
}
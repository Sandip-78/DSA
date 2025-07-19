#include<iostream>
using namespace std;

void selectionsort(int a[],int n){

    for(int i=0;i<=n-2;i++){
        int min = i;
        for(int j=i;j<=n-1;j++){
            if(a[j] < a[min]) min = j;
        }
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;

    }
}

int main(){

    int n;
    cout<<"Enter N : ";
    cin>>n;
    int a[n];
    cout<<"Enter array element : ";
    for(int i=0;i<n;i++) cin>>a[i];
    selectionsort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
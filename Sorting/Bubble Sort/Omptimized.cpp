#include<iostream>
using namespace std;

void bubbleSort(int a[],int n){

    for(int i=n-1;i>=1;i--){
        int didswap = 0;
        for(int j=0;j<=i-1;j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                didswap = 1;
            }
        }
        if(didswap == 0){
            break;
        }
    }
    
}

int main(){

    int n;
    cout<<"Enter N : ";
    cin>>n;
    int a[n];
    cout<<"Enter array element : ";
    for(int i=0;i<n;i++) cin>>a[i];
    bubbleSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
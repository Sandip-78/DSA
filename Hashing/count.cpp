#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter N :";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[a[i]] +=1;
    }

    int q;
    cout<<"How many number you want to search : ";
    cin>>q;
    cout<<"Enter number for which finding count : ";
    int number;
    while(q--){
        cin>>number;
        cout<<hash[number]<<" ";
    }
    return 0;
}
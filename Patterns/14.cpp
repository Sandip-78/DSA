#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;

    //top part

    for(int i=1;i<=n;i++){
        
        //for stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        //for spaces
        for(int j=1;j<=(2*n-2*i);j++){
            cout<<" ";
        }

        //for stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1;i<=n;i++){

        //for stars
        for(int j=n;j>=i;j--){
            cout<<"*";
        }

        //for spaces
        if(i!=1){
            for(int j=0;j<(2*i-2);j++){
                cout<<" ";
            }
        }

        //for stars
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *
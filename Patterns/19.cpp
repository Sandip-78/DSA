// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
#include<iostream>
using namespace std;

void print(int n){
    
    for(int i =0; i<n;i++){
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }

        //space 
        for(int j=1;j<=2*i;j++){
            cout<<" ";
        }

        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1;i<=n;i++){
        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        //space 
        for(int j=0;j<2*n-2*i;j++){
            cout<<" ";
        }

        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}

int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;
    print(n);
    return 0;
}
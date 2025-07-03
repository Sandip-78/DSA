#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter N : ";
    cin>>n;

    //top part
    for(int i=0;i<n;i++){

        //for space
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        cout<<"*";

        if(i!=0){

            //for stars
            for(int k=0;k<2*i-1;k++){
                cout<<" ";
            }
            cout<<"*";

        }

        
        cout<<endl;
    }

    //bottom part
    for(int i=0;i<n-1;i++){

        //for space
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        cout<<"*";

        if(i != n-2){
            //for stars
            for(int k=0;k<2*(n-i)-5;k++){
                cout<<" ";
            }
            cout<<"*";
            cout<<endl;
        }
            
    }

    return 0;
}
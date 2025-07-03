#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;


    for(int i=0;i<n;i++){
        //for space
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        //for numbers
        for(int k=0;k<n-i;k++){
            cout<<i+1;
        }
        cout<<endl;
    }

    return 0;
}

// 1111
//  222
//   33
//    4
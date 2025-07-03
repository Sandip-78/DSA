#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;


    for(int i=1;i<=n;i++){
        //for space
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }

        //for numbers
        for(int k=1;k<=i;k++){
            cout<<k;
        }

        //for numbers
        int a=i-1;
        for(int k=1;k<i;k++){
            cout<<a;
            a--;
        }
        cout<<endl;
    }

    return 0;
}

//    1
//   121
//  12321
// 1234321
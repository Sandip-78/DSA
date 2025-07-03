#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;
    int a = 65;

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<char(a)<<" ";
        }
        a++;
        cout<<endl;
    }

    return 0;
}

// A 
// B B
// C C C
// D D D D
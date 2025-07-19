// A 
// B B
// C C C
// D D D D
// E E E E E
#include<iostream>
using namespace std;

void print(int n){
    int a = 65;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(a)<<" ";
        }
        a++;
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;
    print(n);

    return 0;
}
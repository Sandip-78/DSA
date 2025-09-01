// A B C D E 
// A B C D
// A B C
// A B
// A


#include<iostream>
using namespace std;

void print(int n){
    
    for(int i=1;i<=n;i++){
        int a = 65;
        for(int j=n;j>=i;j--){
            cout<<char(a)<<" ";
            a++;
        }
        
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
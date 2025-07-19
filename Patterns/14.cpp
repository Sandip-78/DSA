// A 
// A B
// A B C
// A B C D
// A B C D E 


#include<iostream>
using namespace std;

void print(int n){
    
    for(int i=1;i<=n;i++){
        int a = 65;
        for(int j=1;j<=i;j++){
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
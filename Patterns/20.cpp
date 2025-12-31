#include<iostream>
using namespace std;

void print(int n){
    int space = 2*n - 2;
    for(int i = 0;i<=2*n-1;i++){
       
        int star = i;
        if(n<=i) star = 2*n -i;
        
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
        if(n>i) space -=2;
        else space +=2;
        
    }
    
}

int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;
    print(n);
    return 0;
}
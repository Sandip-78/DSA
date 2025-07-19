//baki chhe

#include<iostream>
using namespace std;

void print(int n){
    for(int i=1;i<=n;i++){
        //space
        int a = 65;
        for(int j=n-1;j>=i;j--){
            cout<<" ";
        }
        //abcd
        int brakpoint = (2*i + 1)/2;
        for(int j=1;j<=i;j++){
            cout<<char(a);
            if(j<=brakpoint) a++;
            else a--;
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
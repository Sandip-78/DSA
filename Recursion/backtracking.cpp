#include<iostream>
using namespace std;

void print(int i,int n){
    if(i<1) return;
    else {
        print(i-1,n);
        cout<<i<<endl;;
    }
}

int main(){

   int n;
   cout<<"How many time you want to print a name : ";
   cin>>n;

   print(n,n);
    return 0;
}
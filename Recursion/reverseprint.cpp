#include<iostream>
using namespace std;

void print(int i,int n){
    if(i<1) return;
    else {
        cout<<i<<endl;;
        print(i-1,n);
    }
}

int main(){

   int n;
   cout<<"How many time you want to print a name : ";
   cin>>n;

   print(n,1);
    return 0;
}
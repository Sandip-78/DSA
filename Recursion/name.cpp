#include<iostream>
using namespace std;

void print(int i,int n){
    if(i>n) return;
    else {
        cout<<"Sanju"<<endl;;
        print(i+1,n);
    }
}

int main(){

   int n;
   cout<<"How many time you want to print a name : ";
   cin>>n;

   print(1,n);
    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int n = 5;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" "; 
    for(int i=2;i<n;i++){
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }

    return 0;
}

// TC : O(n)
// SC : O(1)

// recursive

// int fib(int n){

//     if(n <= 1)
//         return n;

//     return fib(n-1) + fib(n-2);
// }

// TC : O(2^n)
// SC : O(1)

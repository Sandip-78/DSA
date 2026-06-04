#include<iostream>
using namespace std;

int main(){

    int n=5;
    int fact = 1;
    for(int i=1;i<=n;i++) {
        fact *= i;
    }

    cout<<fact;

    return 0;
}

// TC : O(n)
// SC : O(1)

// recursive 

// factorial(int n){

//     if(n <= 1)
//         return 1;

//     return n * factorial(n-1);
// }
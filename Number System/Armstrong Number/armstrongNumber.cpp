#include<iostream>
using namespace std;

int main () {
    int n = 123;

    int temp = n;
    int sum =0;
    while(n>0){
        int ld = n%10;
        sum = sum + (ld*ld*ld);
        n/=10;
    }
    if(sum == temp) cout<<"Armstrong";
    else cout<<"Not Armstrong";

    return 0;
}
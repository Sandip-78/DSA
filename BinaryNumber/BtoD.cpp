#include<iostream>
using namespace std;

int btod(int n){

    int ans=0;
    int pow = 1;

    while(n>0){
        int ld= n%10;
        n /=10;
        ans = ans + (ld*pow);
        pow *= 2; 
    }
    return ans;
}

int main(){

    cout<<"Enter N : ";
    int n;
    cin>>n;

    cout<<"Binary to Decimal is : "<<btod(n);

    return 0;
}
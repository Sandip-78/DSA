#include<iostream>
using namespace std;

int power(int x , int n){

    if( n==0) return 1.00;
    if( x==1) return 1.00;
    if( x==0) return 0.00;
    if( x== -1 && n%2 == 0 ) return 1.00;
    if( x== -1 && n%2 != 0 ) return -1.00;


    long bf = n; //5
    double ans = 1;

    if(bf < 0 ){
        x = 1/x;
        bf = - bf;
    }

    while(bf > 0){
        if( bf%2 == 1 ){
            ans *= x; // 3 243
        }
        x *= x; // 9 81
        bf /=2 ; // 2 1
    }

    return ans;
}
 
int main(){

    // n is power in : -2^31 < n <  2^31 - 1
    cout<<"The power is : "<<power(3,5);
    return 0;
}
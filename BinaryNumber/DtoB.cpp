#include<iostream>
using namespace std;

int dtob(int n){

    int ans=0;
    int pow=1;

    while(n > 0){
        int rem=n%2;
        n=n/2;

        ans += (rem*pow);
        pow *= 10;

    }
    return ans;

}

int main(){

    cout<<"Enter N : ";
    int n;
    cin>>n;

    cout<<"Decimal TO Binary is : "<<dtob(n);

    return 0;
}
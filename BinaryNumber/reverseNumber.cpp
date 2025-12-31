#include<iostream>
using namespace std;

int cal(int n){

    int r=0;
    while(n>0){
        int ld=n%10;
        n/=10;
        r=(r*10) + ld;
    }
    return r;

}

int main(){

    cout<<"Enter N : ";
    int n;
    cin>>n;

    int ans = cal(n);
    cout<<"The answer is : "<<ans;
    return 0;
}
#include <iostream>
#include<vector>
using namespace std;

int isPrime(int n){
    int cnt=0;
    vector<bool> isPrime(n+1,true);
    
    for(int i=2;i<n;i++){
        if(isPrime[i]){
            cnt++;
            for(int j=i*2;j<n;j=j+i){
                isPrime[j] = false;
            }
        }
    }

    return cnt;
}

int main() {
    int n=50;
    cout<<isPrime(n);
    return 0;
}
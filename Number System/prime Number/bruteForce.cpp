#include <iostream>
using namespace std;

int primeCheck(int n){
    int cnt=0;
    for(int i=2;i<=n;i++){
        if(n%i == 0){
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int n = 5;
    if(primeCheck(n) == 2) cout<<"Prime";
    else cout<<"Not Prime";
    return 0;
}
#include <iostream>
using namespace std;

void primeCheck(int n){
    int cnt=0;
    if(n<=1) cout<<"Not Prime";

    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            cout<<"Not Prime";
            break;
        }
    }

}

int main() {
    int n = 5;
    primeCheck(n);
    return 0;
}

// TC = O(sqrt(n))
// SC = O(1)
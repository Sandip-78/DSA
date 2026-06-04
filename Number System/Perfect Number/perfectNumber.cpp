#include<iostream>
using namespace std;

int main(){

    int n=28;
    if(n == 1) return false;
    int sum = 1;
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            sum = sum + i;
            if((n/i) != i){
                sum = sum + (n/i);
            }
        }
    }

    if(sum == n) cout<<"perfect number";
    else cout<<"No";
    return 0;
}

// TC : O(sqrt(n))
// SC : O(1)
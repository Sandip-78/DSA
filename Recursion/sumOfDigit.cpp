#include<iostream>
#include<vector>
using namespace std;

int fun(int num){

    if(num == 0){
        return 0;
    }

    int ld = num%10;
    num/=10;

    int ans = fun(num);
    ans = ans + ld;
    return ans;
}

int main(){

    int num = 12345;
    cout<<fun(num);

    return 0;
}
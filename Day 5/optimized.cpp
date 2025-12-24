#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n =8;
    int a[n] = {2,0,2,0,1,0,0,1};
    int zero=0;
    int one=0;
    int two=0;

    for(int i=0;i<n;i++){
        if(a[i] == 0){
            zero++;
        }else if(a[i] == 1){
            one++;
        }else{
            two++;
        }
    }

    int idx = 0;

    for(int i = 0; i < zero; i++){
        a[idx++] = 0;
    }


    for(int i = 0; i < one; i++){
        a[idx++] = 1;
    }

    for(int i = 0; i < two; i++){
        a[idx++] = 2;
    }

    for(int i=0;i<n;i++){
        cout<<a[i] <<" ";
    }
    return 0;
}
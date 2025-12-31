#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n =8;
    int a[n] = {2,0,2,0,1,0,0,1};
    vector<int> zero;
    vector<int> one;
    vector<int> two;

    for(int i=0;i<n;i++){
        if(a[i] == 0){
            zero.push_back(a[i]);
            
        }else if(a[i] == 1){
            one.push_back(a[i]);
        }else{
            two.push_back(a[i]);
        }
    }

    int idx = 0;

    for(int i = 0; i < zero.size(); i++){
        a[idx++] = zero[i];
    }


    for(int i = 0; i < one.size(); i++){
        a[idx++] = one[i];
    }

    for(int i = 0; i < two.size(); i++){
        a[idx++] = two[i];
    }

    for(int i=0;i<n;i++){
        cout<<a[i] <<" ";
    }
    return 0;
}
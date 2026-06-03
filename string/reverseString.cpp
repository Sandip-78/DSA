#include<iostream>
#include<string>
using namespace std;

int main(){

    string s = "hello fulwadi";

    int left = 0;
    int right = s.size()-1;

    while(left<right){
        swap(s[left],s[right]);
        left++;
        right--;
    }

    for(auto x : s){
        cout<<x;
    }

    return 0;
}
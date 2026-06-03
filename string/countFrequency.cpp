#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){

    string s = "hello fulwadi fulwadi";
    unordered_map<char,int> f;
    for(char ch : s){
        if(ch == ' ') continue;
        f[ch]++;
    }

    for(auto x : f){
        cout<<x.first<<" "<<x.second<<endl;
    }


    return 0;
}
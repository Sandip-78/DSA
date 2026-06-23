#include<iostream>
#include<vector>
using namespace std;

string fun(string s, char ch,int i){

    if(i==s.size()){
        return "";
    }

    string ans = "";
    if(s[i] != ch) {
        ans = s[i] + fun(s,ch,i+1);
    }else{
        ans =fun(s,ch,i+1);
    } 

    return ans;
}

int main(){

    string s = "apple";  

    cout<< fun(s,'p',0);

    return 0;
}
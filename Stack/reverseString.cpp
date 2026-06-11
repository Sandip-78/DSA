#include<iostream>
#include<stack>
using namespace std;

string reverseString(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }

    string newStr="";
    for(int i=0;i<s.length();i++){
        char c  = st.top();
        st.pop();
        newStr += c;
    }
    return newStr;
}

int main(){

    string s = "abcdef";
    cout<<reverseString(s);

    return 0;
}

// TC : O(n)
// SC : O(n)
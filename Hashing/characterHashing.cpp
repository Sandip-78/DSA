#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter string : ";
    cin>>s;

    int hash[256] = {0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    int q;
    cout<<"Enter how many character count want to find : ";
    cin>>q;
    char c;
    cout<<"Enter the character : ";
    while(q--){
        cin>>c;
        cout<<hash[c]<<endl;
    }
    return 0;
}
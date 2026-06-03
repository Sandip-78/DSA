#include<iostream>
#include<string>
using namespace std;

int main(){

    string s = "A manx, a plan, a canal: Panama";
    int i = 0;
    int j = s.length()-1;

    if(s.length() == 0){
        cout<<true;
        return 0;
    } 
    while(i<j){
        while(i < j && !isalnum(s[i])) i++;
        while(i < j && !isalnum(s[j])) j--;
        if(tolower(s[i])!=tolower(s[j])){
            cout<<false;
            return 0;
        }
        i++;
        j--;
    }

    return 0;
}
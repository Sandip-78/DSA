#include<iostream>
using namespace std;

int find(int count[]){
    int maxCount = 0;
    for(int i=0;i<256;i++){
        maxCount = max(maxCount,count[i]);
    }
    return maxCount;
}   

int main(){

    string s = "AABABBA";
    int k = 2;
    int low = 0, high = 0,res = 0;
    int count[256] = {0};

    for(high=0;high<s.size();high++){
        count[s[high]]++;
        int len = high-low+1;
        int maxCount = find(count);
        int diff = len - maxCount;

        while(diff>k){
            count[s[low]]-=1;
            low++;
            len = high - low +1;
            maxCount = find(count);
            diff = len - maxCount;
        }
        len = high - low +1;
        res = max(res,len);
    }
       cout<<res;
    return 0;
}
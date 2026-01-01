#include<iostream>
#include<unordered_map>
#include<vector>
#include<climits>
using namespace std;

int fun(string &v){
    int low = 0,high=0,res=INT_MIN;
    unordered_map<char,int> f;

    for(high=0;high<v.size();high++){
        f[v[high]] ++;

        int k = high - low +1;
        while(f.size()<k){
            f[v[low]]++;
            if(f[v[low]] ==0){
                f.erase(v[low]);
            }
            low++;
            k = high - low +1;
        }
                int len = high-low+1;
                res = max(res,len);
    }
    return res;

}

int main(){
    string s = "abcabcbb";
    cout<<fun(s);
    return 0;
}

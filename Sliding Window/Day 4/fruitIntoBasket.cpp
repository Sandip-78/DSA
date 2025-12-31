#include<iostream>
#include<unordered_map>
#include<vector>
#include<climits>
using namespace std;

int fun(vector<int> &v,int k){
    int low = 0,high=0,res=INT_MIN;
    unordered_map<int,int> f;

    for(high=0;high<v.size();high++){
        f[v[high]] ++;

        while(f.size()>k){
            f[v[low]]++;
            if(f[v[low]] ==0){
                f.erase(v[low]);
            }
            low++;
        }
        if(f.size() <=k){
                int len = high-low+1;
                res = max(res,len);
        }
    }
    return res;

}

int main(){
    vector<int> v= {0,1,2,2};
    cout<<fun(v,2);
    return 0;
}

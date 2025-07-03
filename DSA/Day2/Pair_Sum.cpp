#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> &a , int target){
    vector<int> ans;

    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i]+a[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
        return ans;
    }
}

int main(){

    vector<int> a={2,11,11,15,7};
    int target = 9;

    vector<int> ans = pairSum(a,target);
    cout<<ans[0]<<" "<<ans[1];

    return 0;
}

    

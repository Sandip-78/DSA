#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int> num , int target){

  vector<int> ans;
   int i=0,j=num.size() - 1 , ps;
    while(i<j){
        ps = num[i] + num[i];
        if(ps < target){
            i++;
        }else if( ps > target){
            j--;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
              return ans;
        }
        
    }
}

int main(){

    vector<int> a={2,7,11,15};
    int target = 9;

    vector<int> ans= pairsum(a,target);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}
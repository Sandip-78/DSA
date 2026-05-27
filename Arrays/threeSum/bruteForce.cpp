#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

void fun(vector<int> &v,int target){
    set<vector<int>> s;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            for(int k=j+1;k<v.size();k++){
                if((v[i]+v[j]+v[k]) == target){
                    vector<int> temp = {v[i],v[j],v[k]};
                    sort(temp.begin(), temp.end());
                    s.insert(temp);
                }
            }
        }
    }

     for(auto triplet : s){

        for(auto x : triplet){

            cout<<x<<" ";
        }

        cout<<endl;
    }
}

int main(){

    vector<int> vec={-1,0,1,2,-1,-4};
    int target = 0;
    fun(vec,target);
    return 0;
}

// TC : O(n3)
// SC : O(n)

// [-1, 0, 1] and [0, -1, 1]
// Mathematically:
// both are SAME triplet so by use of sorting and set we can negalte the duplicates
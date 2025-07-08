#include<iostream>
#include<vector>
using namespace std;

vector<int> product(vector<int> nums){

    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        int pro = 1;
        for(int j=0;j<nums.size();j++){
            if( i!=j){
                pro *= nums[j];
            }
        }
        ans.push_back(pro);
    }

    return ans;
}

int main(){     

    vector<int> a = {1,2,3,4};
    vector<int> result = product(a);
    cout<<"The Product array is : ";
    for(int i=0;i<a.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
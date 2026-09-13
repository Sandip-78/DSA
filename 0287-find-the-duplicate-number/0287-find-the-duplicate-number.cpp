class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> f;

        for(int i=0;i<nums.size();i++){
            f[nums[i]] ++;
        }

        for(auto x : f){
            if(x.second>1){
                return x.first;
            }
        }

        return -1;
    }
};
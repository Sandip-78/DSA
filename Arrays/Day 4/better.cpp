class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        for(auto x : mpp){
            if(x.second > (nums.size()/2)){
                return x.first;
            }
        }
        return -1;
    }
};

// TC : o(n log n)
// SC : o(n)
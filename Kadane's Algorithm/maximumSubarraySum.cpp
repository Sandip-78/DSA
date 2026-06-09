class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestEnding = nums[0];
        int ans = nums[0];

        for(int i=1;i<nums.size();i++){
            int c1 = bestEnding + nums[i];
            int c2 = nums[i];

            bestEnding = max(c1,c2);
            ans = max(ans, bestEnding);
        }
        
        return ans;
    }
};

// TC : O(n);
// SC : O(1)
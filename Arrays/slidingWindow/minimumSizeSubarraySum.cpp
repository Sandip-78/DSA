class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0,high=0,sum=0,result=INT_MAX;
        
        while(high<nums.size()){
            sum = sum + nums[high];
            while(sum>=target){
                int len = high-low+1;
                result = min(result,len);
                sum = sum - nums[low];
                low++;
            }
            high++;
        }

        return result == INT_MAX ? 0 : result;
    }
};

// TC : O(n)
// SC : O(1)
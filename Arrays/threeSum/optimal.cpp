class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;

        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int left = i+1;
            int right = n-1;
            int target = -1 * nums[i];

            while(left < right){
                int sum = nums[left] + nums[right];
                if(sum == target){
                    v.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left < right && nums[left]==nums[left-1]) left++;
                    while(left < right && nums[right]==nums[right+1]) right--;
                }else if(sum > target) {
                    right--;
                }else{
                    left++;
                }
            }
        }

        return v;
    }
};

// TC : O(n2)
// SC : O(1)
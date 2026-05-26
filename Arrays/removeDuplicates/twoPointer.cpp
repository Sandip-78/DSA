class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;
        while(j<nums.size()){
            if(nums[j]!=nums[j-1]){
                nums[++i] = nums[j];
            }
            j++;
        }
        return i+1;
    }
};

// TC : O(n)
// SC : O(1)
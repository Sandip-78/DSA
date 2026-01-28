class Solution {
public:
    int findDuplicate(vector<int> &nums) {
        int i=0,j=i+1;
        sort(nums.begin(),nums.end());
        while(i<nums.size()){
            if(nums[i]==nums[j]){
                return nums[i];
            }
            j++;
            i++;
        }
        return -1;
    }
};
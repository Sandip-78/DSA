class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        while(true){
            slow = nums[slow];
            fast = nums[fast];
            fast = nums[fast];
            if(slow == fast){
                slow = 0;
                while(slow!=fast){
                    slow = nums[slow];
                    fast = nums[fast];
                }
                return slow;
            }

        }
        return -1;
    }
};

// Tc : O(N) where N is the number of elements in the array
// SC : O(1) as we are using only two pointers slow and fast
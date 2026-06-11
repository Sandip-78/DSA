class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> res(n);
        res[n-1] = -1;
        st.push(nums[n-1]);

        for(int i=n-2;i>=0;i--){

            while(!st.empty() && st.top()<=nums[i]) st.pop();

            if(st.empty()){
                res[i] = -1;
            }else{
                res[i] = st.top();
            }

            st.push(nums[i]);
        }

        return res;
        
    }
};

// TC : O(n)
// SC : O(n) 
// on gfg and for next smaller element just change the condition in while loop
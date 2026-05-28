class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int low =0,high = k-1;
        int sum=0;
        for(int i=0;i<=high;i++){
            sum = sum + arr[i];
        }
        
        int ans = 0;
        while(high<arr.size()){
            ans = max(ans,sum);
            low++;
            high++;
            if(high==arr.size()) break;
            sum = sum - arr[low-1];
            sum = sum + arr[high];
        }
        return ans;
    }
};

// TC : O(n)
// SC : O(1)
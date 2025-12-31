class Solution {
  public:
    int maxSubarraySum(vector<int>& a, int k) {
        
        int low = 0;
        int high = k-1;
        int sum =0;
        int result = 0;
        for(int i=0;i<=high;i++){
            sum = sum + a[i];
        }

        while(high < a.size()){
            result = max(result,sum);
            low++;
            high++;
            sum = sum - a[low-1];
            if(high<a.size()){
               sum = sum + a[high]; 
            }
        }
        return result;
    }
};
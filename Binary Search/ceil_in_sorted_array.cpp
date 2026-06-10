class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        int low = 0, high = arr.size()-1;
        int ans = -1;
        
        while(low <= high){
            int mid = (low + high) /2;
            
            if(arr[mid] >= x){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        
        return (ans == -1) ? -1 : ans;
        
    }
};

// TC : O(log n)
// SC : O(1)
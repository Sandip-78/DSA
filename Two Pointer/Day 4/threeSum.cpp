class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        int n = a.size();
        vector<vector<int>> ans;
        sort(a.begin(),a.end());
        for(int i=0;i<n-2;i++){
            if(i>0 && a[i] == a[i-1]) continue;
            if(a[i] > 0) break;

            int left = i+1;
            int right = n-1;

            while(left< right){
                int sum = a[i] +a[left] + a[right];

                if(sum ==0){
                    ans.push_back({a[i],a[left],a[right]});
                    left++;
                    right--;
                    while(left<right && a[left]==a[left-1]) {
                        left++;
                    }
                    while(left<right && a[right]==a[right+1]) {
                        right--;
                    }
                }else if(sum < 0){
                    left++;
                }else{
                    right --;
                }
            }
        }
        return ans;
    }
   
};
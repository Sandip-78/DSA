class Solution {
public:
    long long kokoEatsIn(vector<int>& p, int n,int speed){
        long long h =0;

        for(int i=0;i<n;i++){
            h = h + (p[i] / speed);
            if(p[i]%speed != 0){
                h++;
            }
        }

        return h;
    }

    int maxOfArray(vector<int>& p,int n){
        int maxNum = INT_MIN;

        for(int i=0;i<n;i++){
            if(p[i] > maxNum){
                maxNum = p[i];
            }
        }

        return maxNum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int n = piles.size();
        int high = maxOfArray(piles,n);
        int ans = -1;

        while(low<=high){

            int mid = low + (high - low) / 2;
            long long hour = kokoEatsIn(piles,n,mid);

            if(hour > h){
                low = mid + 1;
            }else{
                ans = mid;
                high = mid - 1;
            }
        }

        return ans;

    }
}; 

// TC : O(n log m)
// SC : O(1)
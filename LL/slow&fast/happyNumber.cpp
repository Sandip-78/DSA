class Solution {
public:
    int fun(int n){
        int sum = 0;
        while(n>0){
            int ld = n%10;
            n/=10;
            sum = sum + (ld*ld);
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        while(fast!=1){
            slow = fun(slow);
            fast = fun(fast);
            fast = fun(fast);

            if(slow == fast && slow!=1){
                return false;
            }
        }
        return true;
    }
};

// TC : O(logN)  The sequence quickly falls into a small range
// SC : O(1)
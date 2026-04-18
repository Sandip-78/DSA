class Solution {
public:
    int maxArea(vector<int>& height) {
        int mw = 0;
        int i=0,j=height.size()-1;
        while(i<j){
            int w = j-i;
            int h = min(height[i],height[j]);
            int area = w*h;
            mw = max(area,mw);
            height[i] < height[j] ? i++ : j--;
        }
        return mw;
    }
};

// Time complexity : o(n)
// Space complexity : o(1)
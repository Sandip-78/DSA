class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int noPower = a[0];
        int result = a[0];
        int power = 0;

        for(int i=1;i<arr.size();i++){
            int c1 = a[i];
            int c2 = noPower + a[i];
            int c3 = Power + a[i];
            int c4 = noPower;

            result = max(result,max(c1,c2),max(c3,c4));
            noPower = max(c1,c2);
            power = max(c3,c4);
        }

        return result;
    }
};
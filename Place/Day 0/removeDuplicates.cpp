class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int i=0,count=1;
        if(arr.size()==0) return 0;
        for(int j=1;j<arr.size();j++){
            if(arr[j]!=arr[j-1]){
                count++;
                i++;
                arr[i]=arr[j];
            }
        }

        return count;
    }
};
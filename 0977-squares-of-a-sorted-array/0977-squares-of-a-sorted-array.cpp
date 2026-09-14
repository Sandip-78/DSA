class Solution {
public:
    vector<int> sqaure(vector<int> &v){

        for(int i=0;i<v.size();i++){
            v[i] = v[i]*v[i];
        }

        return v;
    }
    vector<int> sortedSquares(vector<int>& v) {
         int n = v.size();
        vector<int> pos;
        vector<int> neg;

        for(int i=0;i<n;i++){
            if(v[i] >=0){
                pos.push_back(v[i]);
            }else{
                neg.push_back(v[i]);
            }
        }

        sqaure(pos);
        sqaure(neg);
        reverse(neg.begin(),neg.end());

        int m = pos.size();
        int k = neg.size();

        int i = 0, j = 0, idx = 0;

        while(i<m && j<k){
            if(pos[i] <= neg[j]){
                v[idx++] = pos[i++];
            }else{
                v[idx++] = neg[j++];
            } 
        }

        while(i<m){
            v[idx++] = pos[i++];
        }

        while(j<k){
            v[idx++] = neg[j++];
        }

        return v;
    }
};
class Solution {
public:
    void fun(string digits, unordered_map<char,string> &f,string curr, int i, vector<string> &res){

        if(i == digits.size()){
            res.push_back(curr);
            return;
        }

        string choice = f[digits[i]];

        for(int j=0;j<choice.size();j++){
            curr.push_back(choice[j]);
            fun(digits,f,curr,i+1,res);
            curr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string> f;
        vector<string> res;

        if(digits.empty()){
            return res;
        }

        f['2'] = "abc";
        f['3'] = "def";
        f['4'] = "ghi";
        f['5'] = "jkl";
        f['6'] = "mno";
        f['7'] = "pqrs";
        f['8'] = "tuv";
        f['9'] = "wxyz";

        fun(digits,f,"",0,res);
        
        return res;
    }
};
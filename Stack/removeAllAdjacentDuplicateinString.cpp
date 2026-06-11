class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int n = s.length();

        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            }

            if(st.top() == s[i]){
                st.pop();
                continue;
            }
            st.push(s[i]);
        }

        string newStr="";
        while(!st.empty()){
            char c = st.top();
            newStr.push_back(c);
            st.pop();
        }

        reverse(newStr.begin(),newStr.end()); // TC : O(n)

        return newStr;
    }
};

// TC : O(n)
// SC : O(n)

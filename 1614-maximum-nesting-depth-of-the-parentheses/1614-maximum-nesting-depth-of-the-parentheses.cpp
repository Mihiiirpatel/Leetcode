class Solution {
public:
    int maxDepth(string s) {
        int n=s.length(),ans=0,mx=0;
        stack<char> st;
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                st.push(s[i]);
                mx++;
                if(mx>ans){ans=mx;}
            }else if(s[i]==')'){
                st.pop();
                mx--;
            }
        }
        return ans;
    }
};
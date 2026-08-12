class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
         string m;
        for(int i=0; i<s.length(); i++){
            if(s[i]>='a' && s[i]<='z'){
                  m+=s[i];
            }else if(s[i]>='0' && s[i]<='9'){
                m+=s[i];
            }
        }
        for(int i=0 ; i<m.length()/2; i++){
            if(m[i]!=m[m.length()-i-1]){
                return false;
            }
        }
        return true;
    }
};
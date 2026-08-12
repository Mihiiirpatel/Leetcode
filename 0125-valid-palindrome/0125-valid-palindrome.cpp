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
        int lft=0,rht=m.length()-1;
        while(lft<rht){
            if(m[lft]!=m[rht]){
                return false;
            }
             lft++;
             rht--;
        }
        return true;
    }
};
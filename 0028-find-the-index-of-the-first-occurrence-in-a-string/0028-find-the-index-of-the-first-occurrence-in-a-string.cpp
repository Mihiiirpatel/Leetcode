class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=-1;
        for(int i=0; i<haystack.length(); i++){
            if(m!=-1){return m;}
             else if(haystack[i]==needle[0]){
                m=i;
                for(int j=0; j<needle.length(); j++){
                    if (i+j>=haystack.length() || haystack[i+j]!=needle[j]){
                        m=-1;
                        break; 
                    }
                }
             }
        }return m;
    }
};
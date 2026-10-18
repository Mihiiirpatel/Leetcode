class Solution {
public:
    int pivotInteger(int n) {
        int s1=0;
        for(int i=1; i<=n; i++){
            s1+=i;
            int s2=0;
           for(int j=n; j>=i; j--){
              s2+=j;
              if(s2>s1)break;
           }
           if(s1==s2){
            return i;
           }
        }
        return -1;
    }
};
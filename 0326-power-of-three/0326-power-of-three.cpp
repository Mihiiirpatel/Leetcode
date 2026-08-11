class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1){return false;}
        if(n==1 || n==3 ){
            return true;
        }
        long long v=1;
        for(int i=0;i<n; i++){
            v*=3;
            if (v==n){
                return true;
            }else if(v>n){
                return false;
            }
        }return false;
    }
};
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<1){return false;}
        if(n==1 || n==4 ){
            return true;
        }
        long long v=1;
        for(int i=0;i<n; i++){
            v*=4;
            if (v==n){
                return true;
            }else if(v>n){
                return false;
            }
        }return false;
    }
};
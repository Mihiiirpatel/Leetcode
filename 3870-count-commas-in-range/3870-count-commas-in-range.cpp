class Solution {
public:
    int countCommas(int n) {
        int m = 0;
        for(int i=n; i>0; i/=10){
            m++;
        }
        if(m<4){
            return 0;
        }else{
            int k=n-999;
            return k;
        }
        return 0;
    }
};
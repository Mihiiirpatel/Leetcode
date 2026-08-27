class Solution {
public:
    int mirrorDistance(int n) {
        int rem,rev=0;
        for(int i=n; i>0; i/=10){
            rem=i%10;
            rev=(rev*10)+rem;
        }
        return abs(n-rev);
    }
};
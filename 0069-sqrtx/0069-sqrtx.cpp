class Solution {
public:
    int mySqrt(int x) {
        long long sqrtx;
        for(long long i=0; i*i<=x ;i++){
                sqrtx=i;
        }
        return sqrtx;
    }
};
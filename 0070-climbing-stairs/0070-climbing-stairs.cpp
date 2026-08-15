class Solution {
public:
    int climbStairs(int n) {
        return (1/pow(5,0.5))*(pow((1+pow(5,0.5))/2,n+1)-pow((1-pow(5,0.5))/2,n+1));
    }
};
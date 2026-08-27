class Solution {
public:
    int digitFrequencyScore(int n) {
        int rem,ans;
        for(int i=n; i>0; i/=10){
            rem=i%10;
            ans+=rem;
        }return ans;
    }
};
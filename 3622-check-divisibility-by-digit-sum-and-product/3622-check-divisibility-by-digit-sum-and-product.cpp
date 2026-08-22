class Solution {
public:
    bool checkDivisibility(int n) {
        int sm=0,mlti=1,rem;
        for(int i=n; i>0; i/=10){
            rem=i%10;
            sm+=rem;
            mlti*=rem;
        }
        return n%(sm+mlti)==0;
    }
};
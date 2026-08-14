class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1,sum=0,rem;
        for(int i=n; i>0; i/=10){
           rem=i%10;
           pro*=rem;
           sum+=rem;
        }
        return pro-sum;
    }
};
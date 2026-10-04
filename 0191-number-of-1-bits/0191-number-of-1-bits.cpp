class Solution {
public:
    int hammingWeight(int n) {
       int c=0;
        for(int i=n; i>0; i/=2){
           int rem=i%2;
           if(rem==1){
            c++;
           }
        }
        return c;
    }
};
class Solution {
public:
    int smallestNumber(int n, int t) {
        int pro=1,rem=0,tmp;
        while(pro%t!=0){
            pro=1;
            tmp=n;
            while(tmp>0){
              rem=tmp%10;
              pro*=rem;
              tmp/=10; 
            }if(pro%t!=0){n++;}
        }return n;
    }
}; 
class Solution {
public:
    int maxProduct(int n) {
        int rem=0,m=0,p=0;
        for (int i = n ; i != 0 ; i/=10){
         rem=i%10;
         if(m<p){
         if(m<rem){
            m=rem;
         }}else{
         if(p<rem){
             p=rem;
         }}
        }
        return m * p;
    }
};
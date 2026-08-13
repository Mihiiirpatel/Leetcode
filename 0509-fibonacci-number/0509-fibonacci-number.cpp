class Solution {
public:
    int fib(int n) {
        if(n==1){
            return 1;
        }
       int f[n+2];
       f[0]=0;
       f[1]=1;
    for(int i=2; i<n+1; i++){
     f[i]=f[i-1]+f[i-2];
     if(i==n){
        return f[i];
     }
    } return 0;
    }
};
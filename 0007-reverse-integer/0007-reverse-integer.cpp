class Solution {
public:
    int reverse(int x) {
        long long rev=0;
        int rem;
        for(int i=x;i!=0;i/=10){
            rem=i%10;
            if (rev > 214748364 || (rev == 214748364 && rem > 7)) {
                return 0;
            }
            if (rev < -214748364 || (rev == -214748364 && rem < -8)) {
                return 0;
            }
            rev=(rev*10)+rem;
        }
        return rev;
    }
};
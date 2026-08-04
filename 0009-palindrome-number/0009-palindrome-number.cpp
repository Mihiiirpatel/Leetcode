class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long long rev = 0; 
        int rem;
        for (int i = x; i > 0; i /= 10) {
            rem = i % 10;
            rev = (rev * 10) + rem;
        }
        return x == rev; 
    }
};
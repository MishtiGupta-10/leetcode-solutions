class Solution {
public:
    bool isPalindrome(int x) {
        int num ;
        int rev = 0;
        num = x;
        if(x<0) return false;
        while (x != 0) {
            int rem = x % 10;
            if (rev > INT_MAX / 10 || rev == INT_MAX && rem == 7)
                return 0;
            if (rev < INT_MIN / 10 || rev == INT_MIN && rem == -8)
                return 0;
            rev = rev * 10 + (x % 10);
            x = x / 10;
        }

        if(num != rev)
            return false;
        else 
            return true;
    }
};

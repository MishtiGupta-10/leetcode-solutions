class Solution {
public:
    int getReverse (int x)
    {
        long rev = 0;
        int digit;

        while(x!=0)
        {
            digit = x%10;
            rev = rev*10 + digit;
            x = x/10;
        }
        return rev;
    }
    bool isPalindrome(int x) {
        int reverse;
        if (x < 0)
        {
            return false;
        }
        else 
        {
            reverse = getReverse(x);
            if(reverse == x)
            {
                return true;
            }
            else 
            {
                return false;
            }
        }

        if (reverse < INT_MIN || reverse > INT_MAX)
        return false;
    }
};

class Solution {
public:
    bool Palindrome (int i, int j, const string& s)
    {
        if (i > j)
            return true;

        while(i < j && !isalnum(s[i]))
            i++;

        while(i < j && !isalnum(s[j]))
            j--;
            
        // If the start and end characters are not equal, it's not a palindrome.
        if (tolower(s[i]) != tolower(s[j]))
            return false;
            
        // If the characters are equal check recusrively for next.
            return Palindrome(i+1,j-1, s);
    }

    bool isPalindrome(string s) {
        return Palindrome(0, s.length()-1, s);
    }
};

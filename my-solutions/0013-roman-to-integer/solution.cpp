class Solution {
public:

    int checkValue(char c)
    {
        if (c == 'I')
            return 1;
        else if (c == 'V')
            return 5;
        else if (c == 'X')
            return 10;
        else if (c == 'L')
            return 50;
        else if (c == 'C')
            return 100;
        else if (c == 'D') 
            return 500;
        else if (c == 'M')
            return 1000;

        return 0;
    }
    int romanToInt(string s) {
        int num = 0;
        for (int i=s.length()-1; i>=0; i--)
        {
            int value = checkValue(s[i]);
            if (i==s.length()-1)
            {
                num = num + value;
            }
            else 
            {
                if(checkValue(s[i])<checkValue(s[i+1]))
                {
                    num = num - value;

                }
                else
                {
                    num = num + value;
                }
            }
        }

        return num;


    }
};

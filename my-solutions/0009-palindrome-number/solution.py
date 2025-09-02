class Solution:
    def isPalindrome(self, x: int) -> bool:

        num = str(x)

        p1 = 0
        p2 = len(num)-1

        while(p2 > p1):
            if(num[p1] != num[p2]):
                return False

            p1 += 1
            p2 -= 1

        return True
        

        

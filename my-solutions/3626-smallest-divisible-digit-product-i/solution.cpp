class Solution {
public:
    int smallestNumber(int n, int t) {
        int product = 1;
        int temp = n;
        while(n!=0){
            product *= n%10;

            n=n/10;
        }

        if(product % t == 0) return temp;
        
        return smallestNumber(temp+1, t);
    }
};

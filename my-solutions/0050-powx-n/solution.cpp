class Solution {
public:
    double power(double x, long long n){
        if(n==0) return 1.0;

        if(n==1) return x;

        if(n%2 == 0){
            return power(x*x, n/2);
        }

        return x*power(x, n-1);
    }

    double myPow(double x, int n) {
        long long num =1ll* n;

        if(num < 0){
            return (1/power(x,-1*1ll*num));
        }

        return power(x, num);
        
    }
};

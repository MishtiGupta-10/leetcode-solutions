class Solution {
public:
    long long modPow(long long base, long long exp) {
    long long ans = 1;
    long long mod = 1e9 + 7;

    while (exp > 0) {
        if (exp & 1)
            ans = (ans * base) % mod;

        base = (base * base) % mod;
        exp >>= 1;
    }

    return ans;
}
    int countGoodNumbers(long long n) {
        long long  even = (n + 1)/2;
        long long prime =  n - even;
        int mod = 1e9 + 7;

        long long  total = modPow(5, even) * modPow(4, prime);
        int res = total % mod;
        return res;

    }
};

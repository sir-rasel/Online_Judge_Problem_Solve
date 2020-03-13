class Solution {
public:
    double fastPow(double x, long long n) {
        double cur = x,res = 1.0;
        for (long long i = n; i; i /= 2) {
            if (i%2 == 1) {
                res *=  cur;
            }
            cur *= cur;
        }
        return res;
    }

    double myPow(double x, int n) {
        long long int nn=n;
        if (n < 0) {
            x = 1.0 / x;
            nn = -nn;
        }
        return fastPow(x,nn);
    }
};

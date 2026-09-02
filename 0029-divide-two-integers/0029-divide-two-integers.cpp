class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        if (divisor == 1) {
            return dividend;
        }
        bool isNegative = (dividend < 0) ^ (divisor < 0);
        int a = dividend < 0 ? dividend : -dividend;
        int b = divisor < 0 ? divisor : -divisor;
        long long quotient = 0;
        while (a <= b) {
            a -= b;
            quotient++;
        }
        return isNegative ? -quotient : quotient;
    }
};
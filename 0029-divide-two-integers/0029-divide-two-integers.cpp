
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        long long quotient = 0;

        while (a >= b) {
            long long temp = b;
            long long count = 1;

            while (a >= temp) {
                a -= temp;
                quotient += count;

                if (a < b)
                    break;

                if (temp > a)
                    break;

                temp += temp;
                count += count;
            }
        }

        if ((dividend < 0) != (divisor < 0))
            quotient = -quotient;

        return (int)quotient;
    }
};

/*
Given a number and its reverse. Find that number raised to the power of its own reverse.
Note: As answers can be very large, print the result modulo 109 + 7.

Example 1:

Input:
N = 2, R = 2
Output: 4
Explanation: The reverse of 2 is 2 and after raising power of 2 by 2 we get 4 which gives remainder as 4 when divided by 1000000007.

*/
public:
long long power(int N, int R)
{
    const long long MOD = 1000000007;
    long long result = 1;
    long long base = N % MOD;

    while (R > 0)
    {
        if (R % 2 == 1)
        {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        R /= 2;
    }
    return result;
}
}
;
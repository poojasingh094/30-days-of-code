/*
Given a number n. Count the number of digits in n which evenly divide n. Return an integer, total number of digits of n which divides n evenly.

Input: n = 12
Output: 2
Explanation: 1, 2 when both divide 12 leaves remainder 0.

*/

class Solution
{
public:
    int evenlyDivides(int N)
    {
        if (N == 0) return 0;

        int count = 0;
        int num = N;
        while (num != 0)
        {
            int lastdigit = num % 10;
            if (lastdigit != 0 && N % lastdigit == 0)
            {
                count++;
            }
            num = num / 10;
        }
        return count;
    }
};
/*PTR
count can also be calculated as: int cnt= (int)(log10(n)+1);
if the number of iterations is based on dividing the number by 10 , tc will be logarithmic, O(log n).
division by zero is undefined and would cause a runtime error or exception. .
*/
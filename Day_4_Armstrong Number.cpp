/*
You are given an integer 'n'. Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.

An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.

Sample Input:
1634

Sample Output:
true

Explanation:
1634 is an Armstrong number, as 1^4 + 6^4 + 3^4 + 4^4 = 1634

*/

bool checkArmstrong(int n)
{
    int count = int(log10(n) + 1);
    int num = n;
    int ans = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        ans = ans + pow(lastdigit, count);
        num = num / 10;
    }
    return ans == n;
}

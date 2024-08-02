/*
Given an integer x, return true if x is a
palindrome
, and false otherwise.

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

*/

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0) return false;
        long reverseNum = 0;
        int num = x;
        while (num)
        {
            reverseNum = reverseNum * 10 + num % 10;
            num = num / 10;
        }
        if (reverseNum == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

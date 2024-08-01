/* Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Example 1:
Input: x = 123
Output: 321

*/

class Solution {
public:
    int reverse(int x) {
        int rn =0;
        while(x){
        if (rn>INT_MAX/10 || rn<INT_MIN/10) return 0;
		rn=rn*10+x%10;
        x=x/10;
	}
    return rn;
    }
};
// while(x) is equivalent to while(x != 0). 
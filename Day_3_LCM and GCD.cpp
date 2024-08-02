/*
Given two integers a and b, write a function lcmAndGcd() to compute their LCM and GCD. The function takes two integers a and b as input and returns a list containing their LCM and GCD.

Example 1:

Input: a = 5 , b = 10
Output: 10 5
Explanation: LCM of 5 and 10 is 10, while thier GCD is 5.

*/

class Solution
{
public:
    vector<long long> lcmAndGcd(long long A, long long B)
    {
        vector<long long> v;
        long long mul = A * B;
        while (A > 0 && B > 0)
        {
            if (A > B)
                A = A % B;
            else
                B = B % A;
        }
        if (A == 0)
        {
            long long LCM = abs(mul) / B;
            v.push_back(LCM);
            v.push_back(B);
        }
        else
        {
            long long LCM = abs(mul) / A;
            v.push_back(LCM);
            v.push_back(A);
        }
        return v;
    }
};

/*PTR
The first approach or brute force method to find gcd can be this:
int gcd = 1;
for(i=1;i<=min(n1, n2); i++){
if(n1%i == 0 && n2%i == 0){
gcd =i
}
} worst case : O(min (n1, n2))

Better approach:- Euclidean algorithm
gcd(n1, n2) = gcd( n1-n2, n2), where n1>n2
gcd(20, 15) = gcd(5, 15) = gcd (10, 5) = gcd (5, 5) = gcd (0, 5) -> gcd =5, it has a lot of steps and might not improve the linear time complexity but
these steps can be reduced as (20%15, 15) = (5, 15)
simply do (greater % smaller) till one of them is 0, then the other is gcd, time complexity
Time complexity: O(log(min(n1, n2)))
Also,
LCM(a,b)= ∣a×b∣/ GCD(a,b)

*/
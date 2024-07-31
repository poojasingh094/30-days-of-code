/* 
The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
    F(n) = F(n - 1) + F(n - 2),
    Where, F(1) = 1, F(2) = 1
    
Input:6
Output:8
Explanation: The number is ‘6’ so we have to find the “6th” Fibonacci number.
So by using the given formula of the Fibonacci series, we get the series:
[ 1, 1, 2, 3, 5, 8, 13, 21]
So the “6th” element is “8” hence we get the output. 

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1 || n == 2)
    {
        cout << 1;
        return 0;
    }

    vector<int> result;
    result.push_back(1);
    result.push_back(1);

    for (int i = 2; i < n; i++)
    {
        result.push_back(result[i - 1] + result[i - 2]);
    }

    int answer = result.back();
    cout << answer;
    return 0;
}

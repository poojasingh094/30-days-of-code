/*

Given an array arr containing n integers and an integer k. Your task is to find the length of the longest Sub-Array with the sum of the elements equal to the given value k.

Examples:

Input : n = 6, arr[] = {10, 5, 2, 7, 1, 9}, k = 15
Output : 4
Explanation: The sub-array is {5, 2, 7, 1}.

*/

// Brute-Force Solution

class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        int maxi = 0;
        for (int i = 0; i < N; i++)
        {
            int sum = 0;
            for (int j = i; j < N; j++)
            {
                sum = sum + A[j];
                if (sum == K)
                
                    int count = j - i + 1;
                    maxi = max(maxi, count);
                }
            }
        }
        return maxi;
    }
};
Time Complexity: O(N^2);
//Better Approach - using hashmap - prefix-sum method
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
    map<int, int>preSumMap;
    int sum =0;
    int maxLen = 0;
    for(int i=0; i<N; i++) {
        sum += A[i];
        if(sum == K) {
            maxLen = max(maxLen, i+1);
        }
        int  rem = sum - K;
        if(preSumMap.find(rem) != preSumMap.end()) {
            int len = i-preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
};// This solution is optimal for- if the array contains positive as well as negative no's

Time Complexity: O(N * log N)
Space Complexity: O(N);

//Optimal Solution- if the array contains just the positives and zeros

public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
    int left =0, right = 0;
    int sum = A[0];
    int maxLen =0;
    while(right < n) {
        while(left <= right && sum > K) {
            sum -= A[left];
            left++;
        }
        if(sum == k) {
            maxLen = max(maxLen, right - left +1);
        }
        right++;
        if(right < n) sum += A[right]; 
    }
        return maxLen;
    }

Time Complexity: O(2N)
Space Complexity: O(1)


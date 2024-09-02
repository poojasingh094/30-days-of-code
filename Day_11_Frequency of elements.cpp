/*
Problem 1:
You are given an array arr[] containing positive integers. These integers can be from 1 to p, and some numbers may be repeated or absent. Your task is to count the frequency of all numbers that lie in the range 1 to n.

Note:

Do modify the array in-place changes in arr[], such that arr[i] = frequency(i) and assume 1-based indexing.
The elements greater than n in the array can be ignored when counting.

Input: n = 5, arr[] = [2, 3, 2, 3, 5], p = 5
Output: [0, 2, 2, 0, 1]
Explanation: Counting frequencies of each array element We have: 1 occurring 0 times. 2 occurring 2 times. 3 occurring 2 times. 4 occurring 0 times. 5 occurring 1 time, all the modifications done in the same given arr[].

*/

class Solution
{
public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int> &arr, int N, int P)
    {
        unordered_map<int, int> mpp;

        for (int i = 0; i < N; i++)
        {
            mpp[arr[i]]++;
        }

        for (int i = 1; i <= N; i++)
        {
            arr[i - 1] = mpp[i];
        }
    }
};
/*
Problem 2:
You are given an array of strings names, and an array heights that consists of distinct positive integers. Both arrays are of length n.

For each index i, names[i] and heights[i] denote the name and height of the ith person.

Return names sorted in descending order by the people's heights.

 

Example 1:

Input: names = ["Mary","John","Emma"], heights = [180,165,170]
Output: ["Mary","Emma","John"]
Explanation: Mary is the tallest, followed by Emma and John.

*/

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string, greater<int>>mpp;
        vector<string>sortednames;
        for(int i=0; i< names.size(); i++){
            mpp.insert({heights[i], names[i]});
        }
       for(auto it:mpp){
        sortednames.push_back(it.second);
       }
       return sortednames;
    } 
};
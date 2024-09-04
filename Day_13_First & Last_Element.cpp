/*
Find First and Last Position of Element in Sorted Array
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

*/


Binary Search Approach: Much faster for large datasets due to its O(logn) time complexity.
Linear Scan Approach: Time Complexity: O(n) because you might need to scan the entire array to find the first and last occurrences.
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                result[0] = i;
                break;
            }
        }

        if (result[0] == -1) {
            return result;
        }

        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] == target) {
                result[1] = i;
                break;
            }
        }

        return result;
    }
};
//Similar and easy approach-

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);  // Initialize result with [-1, -1]

        // Traverse the array to find the first and last occurrence of the target
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                if (result[0] == -1) {  // First occurrence
                    result[0] = i;
                }
                result[1] = i;  // Last occurrence (keep updating until the end)
            }
        }

        return result;
    }
};
//PTR
Use Binary Search Algorithm to solve the problem because it will take Time complexity as O(logn)only 
The binary search algorithm is efficient for finding elements in 
a sorted array. 

/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
Example 1:

Input: nums = [3,2,3]
Output: 3

*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>mpp;
        int m= nums.size()/2;

        for(auto it:nums){
            mpp[it]++;
            if(mpp[it]>m) return it;
        }
        return -1;
    }
};

Time Complexity:- O(n)
Space Complexity:- O(n)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        return nums[size/2];
    }
};
Time Complexity:- O(nlogn)
Space Complexity:- O(n)

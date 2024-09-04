/*
Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.

You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.

Example 1:

Input: nums = [1,2,0]
Output: 3
Explanation: The numbers in the range [1,2] are all in the array.

*/
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>v;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>0 && nums[i+1] !=nums[i]) v.push_back(nums[i]);
        }
        v.push_back(nums[nums.size()-1]);
        for(int i=1;i<=v.size();i++){
            if(i!=v[i-1]) return i;
        }
        return v.size()+1;
    }
};
However this might not be the optimized and correct approach because 
Time complexity: O(nlogn) due to sorting. The subsequent operations (filtering and checking) are O(n).

Space complexity: O(n) due to the additional vector v used to store positive numbers.
//The optimal approach:-

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }
        return n + 1;
    }
};
Time Complexity: O(n)
Space Complexity: O(1)
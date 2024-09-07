/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

*/
This is brute-force approach-
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    k=k%nums.size();
    int temp[k];
    for(int i=0; i<k;i++){
        //storing
    temp[i]=nums[nums.size()-k+i];
      }
    for(int i=1; i<=nums.size()-k; i++){
        //shifting
        nums[nums.size()-i]=nums[nums.size()-k-i];
    }
    for(int i=0; i<k; i++) {
        nums[i]=temp[i];
    }
    }
};
Time Complexity: O(n);
Space Complexity: O(k);

Optimal approach (space complexity O(1))

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; 
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k, nums.end());

    }
};
// If its left rotation then
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; 

    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k, nums.end());
    reverse(nums.begin(), nums.end());

    }
};
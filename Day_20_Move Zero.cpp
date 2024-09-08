/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

*/
Brute Force Approach
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       vector<int> temp;
       for(auto it:nums){
        if(it != 0) temp.push_back(it);
       }
       for(int i=0; i<temp.size(); i++){
        nums[i]=temp[i];
       }
       for(int i=temp.size(); i<nums.size(); i++){
            nums[i]=0;
        }
    }
};
Time Complexity:O(N)
Space Complexity: O(x), O(n) in worst case

Optimal Approach(Two pointer approach)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int j = -1;

      for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 0){
            j = i;
            break;
        }
      }

       if (j == -1) return; 

        for(int i = j + 1; i < nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};
Time Complexity:O(N)
Space Complexity: O(1)

/*
Given an array arr, return the second largest distinct element from an array. If the second largest element doesn't exist then return -1.

Examples:

Input: arr = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.

*/

class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
       int largest = INT_MIN;
        int secondLargest = INT_MIN;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > largest) {
                secondLargest = largest; 
                largest = arr[i]; 
            } else if (arr[i] > secondLargest && arr[i] < largest) {
                secondLargest = arr[i]; 
            }
        }

        return (secondLargest == INT_MIN) ? -1 : secondLargest;
    }
};
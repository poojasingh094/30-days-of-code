/*
A distinct string is a string that is present only once in an array.

Given an array of strings arr, and an integer k, return the kth distinct string present in arr. If there are fewer than k distinct strings, return an empty string "".

Note that the strings are considered in the order in which they appear in the array.

 

Example 1:

Input: arr = ["d","b","c","b","c","a"], k = 2
Output: "a"
Explanation:
The only distinct strings in arr are "d" and "a".
"d" appears 1st, so it is the 1st distinct string.
"a" appears 2nd, so it is the 2nd distinct string.
Since k == 2, "a" is returned. 

*/
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int>mpp;
        vector<string>v;
        for(auto str: arr){
            mpp[str]++;
        }

        for(auto str: arr){
            if(mpp[str]==1) {
                v.push_back(str);
            } 
        }
        if(k > v.size()) {
            return "";
        }
        return v[k-1];
    }
};

/*
Given an array of n integers. Return the element that occurs at least k number of times.

Note:

If there are multiple answers, please return the first one.
If there is no element found, return -1.
Examples

Input: n = 7, k = 2, arr[] = [1, 7, 4, 3, 4, 8, 7]
Output: 4
Explanation: Both 7 and 4 occur 2 times. But 4 is first that occurs twice. As the index = 4, is the first element.

*/
class Solution {
  public:
    int firstElementKTime(int n, int k, int arr[]) {
        unordered_map<int, int>mpp;
       
        for(int i =0; i <n;i++){
            mpp[arr[i]]++;
             if(mpp[arr[i]]>=k){
             return arr[i];  
            }
        } 
        return -1;
    }
};

/*

You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear in the string allowed.

Return the number of consistent strings in the array words.

 

Example 1:

Input: allowed = "ab", words = ["ad","bd","aaab","baa","badab"]
Output: 2
Explanation: Strings "aaab" and "baa" are consistent since they only contain characters 'a' and 'b'.

*/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char, int>mpp;
        for(int i=0; i<allowed.size(); i++){
            mpp[allowed[i]]++;
        }
        int ans = words.size();
         for(auto it: words){
            for(int i=0;i<it.size(); i++){
                if(mpp[it[i]] == 0){
                   ans--;
                   break;
                }
            }
         }
         return ans;
    }
};
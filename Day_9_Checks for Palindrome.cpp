/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

*/

class Solution {
public:
    bool isPalindrome(string s, int i=0) {
        string st;
        for(char c:s){
            if(isalnum(c)){
                st+=tolower(c);
            }
        }

    if (i >= st.size() / 2) return true;
    if (st[i] != st[st.size() - i - 1]) return false;
    return isPalindrome(st, i+1);
    }
   
};//This soln results is exceeding memory limit because each recursive call creates a new copy of the cleaned string st.

//Refactored solution
class Solution {
public:
    bool isPalindrome(string s, int i=0) {
        string st;
        for(char c:s){
            if(isalnum(c)){
                st+=tolower(c);
            }
        }
    return checkPalindrome(st, 0, st.size() - 1);
    }
    
    bool checkPalindrome(const string& st, int i, int j) {
        if (i >= j) return true;   
        if (st[i] != st[j]) return false;
        return checkPalindrome(st, i + 1, j - 1);
    }
};
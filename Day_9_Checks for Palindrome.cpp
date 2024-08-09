/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

*/


//This soln results is exceeding memory limit because each recursive call creates a new copy of the cleaned string st.
//Since st is passed by value (not by reference), every recursive call creates a new copy of the string st. This results in the creation of multiple copies of st in memory, leading to excessive memory usage
// In this case, every recursive call creates a new copy of st, which consumes additional memory.
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
   
};

//Refactored solution- The checkPalindrome function only passes the indices i and j, avoiding unnecessary string copying and memory overhead.
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
// Q: Check if String is Palindrome or Not
// --------------------------------------------------------------------------------------------------------------
// Given a string s, return true if the string is palindrome, otherwise false.
// A string is called palindrome if it reads the same forward and backward.
// --------------------------------------------------------------------------------------------------------------
// Example 1
// Input : s = "hannah"
// Output : true
// Explanation : The string when reversed is --> "hannah", which is same as original string , so we return true.
// --------------------------------------------------------------------------------------------------------------
class Solution {
private:
    bool helper(int i, string& s) {
        int n = s.size();
        
        // Base case: If we've reached or passed the middle, it's a palindrome
        if (i >= n / 2) return true;
        
        // If characters at symmetrical positions don't match
        if (s[i] != s[n - 1 - i]) return false;
        
        // Recursive step: check the next pair of characters
        return helper(i + 1, s);
    }

public:
    bool palindromeCheck(string& s) {
        return helper(0, s);
    }
};

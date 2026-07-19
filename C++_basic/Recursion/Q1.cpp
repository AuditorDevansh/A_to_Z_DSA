//  Q:Print 1 to N using Recursion
// ----------------------------------------------------------------------------------------------------------
// Given an integer n, write a function to print all numbers from 1 to n (inclusive) using recursion.
// ----------------------------------------------------------------------------------------------------------
// You must not use any loops such as for, while, or do-while.
// The function should print each number on a separate line, in increasing order from 1 to n.
// ----------------------------------------------------------------------------------------------------------
// Example 1
// Input: n = 5
// Output:
// 1  
// 2  
// 3  
// 4  
// 5
// -----------------------------------------------------------------------------------------------------------
class Solution {
public:
    void printNumbers(int n) {
        // Base Case: Stop when n goes below 1
        if (n < 1) {
            return;
        }
        
        // Recursive Call: Go all the way down to 1 first
        printNumbers(n - 1);
        
        // Backtracking Step: Print the current number on a new line as we return
        cout << n << "\n";
    }
};


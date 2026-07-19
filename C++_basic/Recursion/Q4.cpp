// Q: Factorial of a given number
// You are given an integer n. Return the value of n! or n factorial.
// Factorial of a number is the product of all positive integers less than or equal to that number.
// ------------------------------------------------------------------------------------------------
// Example 1
// Input: n = 2
// Output: 2
// Explanation: 2! = 1 * 2 = 2.
// ------------------------------------------------------------------------------------------------
  class Solution {
public:
    int factorial(int n) {
        if (n<1)
        return 1;
        return n *factorial(n-1);

    }
};


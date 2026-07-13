// Check if the Number is Armstrong
// --------------------------------------------------------------------------------------------------------------------------------------------------------
// You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.

// An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.
// ---------------------------------------------------------------------------------------------------------------------------------------------------------
// Example 1
// Input: n = 153
// Output: true
// Explanation: Number of digits : 3.
// 13 + 53 + 33 = 1 + 125 + 27 = 153.
// Therefore, it is an Armstrong number.
// --------------------------------------------------------------------------------------------------------------------------------------------------------
// Example 2
// Input: n = 12
// Output: false
// Explanation: Number of digits : 2.
// 12 + 22 = 1 + 4 = 5.
// Therefore, it is not an Armstrong number.
// -------------------------------------------------------------------------------------------------------------------------------------------------------

class Solution {
public:
    bool isArmstrong(int n) {
        int k = to_string(num).length(); // Get number of digits
        int sum = 0;
        int n = num;

        while (n > 0) {
            int ld = n % 10;            // Get last digit
            sum += pow(ld, k);          // Add ld^k to sum
            n /= 10;                    // Remove last digit
        }

        return sum == num; // Return true if sum equals original number
    }
};



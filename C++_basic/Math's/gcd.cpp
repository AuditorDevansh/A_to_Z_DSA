// Q: GCD of Two Numbers
// ------------------------------------------------------------------------------------------------------
// You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.

// The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.
// ------------------------------------------------------------------------------------------------------
// Example 1
// Input: n1 = 4, n2 = 6
// Output: 2
// Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6
// Greatest Common divisor = 2.
// -------------------------------------------------------------------------------------------------------
// Example 2
// Input: n1 = 9, n2 = 8
// Output: 1
// Explanation: Divisors of n1 = 1, 3, 9 Divisors of n2 = 1, 2, 4, 8.
// Greatest Common divisor = 1.
// -------------------------------------------------------------------------------------------------------

class Solution {
public:
    int findGcd(int a, int b) {
    // Continue loop as long as both
    // a and b are greater than 0
    while(a > 0 && b > 0) {
        // If a is greater than b,
        // subtract b from a and update a
        if(a > b) {
             // Update a to the remainder
             // of a divided by b
            a = a % b;
        }
        // If b is greater than or equal
        // to a, subtract a from b and update b
        else {
            // Update b to the remainder
            // of b divided by a
            b = b % a; 
        }
    }
    // Check if a becomes 0,
    // if so, return b as the GCD
    if(a == 0) {
        return b;
    }
    else{
        return a;
     }    
    }

};

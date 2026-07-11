// // You are given an integer n. Return the integer formed by placing the digits of n in reverse order.
// -----------------------------------------------------------------------------------------------------
// Example 1
// Input: n = 25
// Output: 52
// Explanation: Reverse of 25 is 52.
// -----------------------------------------------------------------------------------------------------
// Example 2
// Input: n = 123
// Output: 321
// Explanation: Reverse of 123 is 321.
// -----------------------------------------------------------------------------------------------------

class Solution {
public:
    int reverseNumber(int n) {
        int rev =0; // reverse ==0
    while(n>0){ // run till n>0
         rev = rev*10 + (n%10); // n=39--> 0*10 + 39%10 ---> (39%10 == 9 , again 3%10 == 3 ) --> 0 + 9 = 9 --> 9 *10 +3 == 93 
         n = n/10; // n/10 ==> (n=39)--> 39/10= 3 (Q) ,, check 3 > 0 --> yes again loop --> 3/10 == 0 ,, check 0>0 == False --> end;
     }
     return rev;

    }
};

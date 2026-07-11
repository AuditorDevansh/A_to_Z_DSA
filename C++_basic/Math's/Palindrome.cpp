// Q: Palindrome Number
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------
// You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------
// A palindrome number is a number which reads the same both left to right and right to left.
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------
// Example 1
// Input: n = 121
// Output: true
// Explanation: When read from left to right : 121.
// When read from right to left : 121.
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------
// Example 2
// Input: n = 123
// Output: false
// Explanation: When read from left to right : 123.
// When read from right to left : 321.
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------

class Solution {
public:
    bool isPalindrome(int n) {
    int rev =0; // reverse ==0
    int dup =n;
     while(n>0){ // run till n>0
         rev = rev*10 + (n%10); // n=39--> 0*10 + 39%10 ---> (39%10 == 9 , again 3%10 == 3 ) --> 0 + 9 = 9 --> 9 *10 +3 == 93 
         n = n/10; // n/10 ==> (n=39)--> 39/10= 3 (Q) ,, check 3 > 0 --> yes again loop --> 3/10 == 0 ,, check 0>0 == False --> end;
     }
    if(dup == rev){ // Check Original_no == reverse_of_original_no
        return  true; // Yes--> True
    }
    else{
        return false; // No --> False
    }
    
    }
};




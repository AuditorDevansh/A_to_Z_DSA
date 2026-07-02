// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// -----------------------------------------------------------------------------------------------------------------------------------------------
// A -0                
// AB -1
// ABC -2
// ABCD -3
// ABCDE -4
// ------------------------------------------------------------------------------------------------------------------------------------------------
// Print the pattern in the function given to you.
// -------------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
public:
    void pattern14(int n) {    
        // outer loop (row)
        for(int i=0;i<n;i++){
        // Pattern
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";  // Print the character followed by a space
        }
        // new row
        cout << endl;
    
    }
   }
};



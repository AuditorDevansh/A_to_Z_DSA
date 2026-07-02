// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// -----------------------------------------------------------------------------------------------------------------------------------------------
// ABCDE -0
// ABCD -1
// ABC -2
// AB -3
// A -4
// ------------------------------------------------------------------------------------------------------------------------------------------------
// Print the pattern in the function given to you.
// ------------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
public:
    void pattern15(int n) {
        for(int i=0;i<n;i++){
        for(char j='A' ; j<'A'+(n-i);j++){
            cout<< j <<" ";
        }
        cout << endl;
    }
}
};



// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// ------------------------------------------------------------------------------------------------------------------------------------------------
//          n=5    |space stars space| space formula :- j<i, 
// ********* -0    |  0    9     0   | stars fromula :- 2n -1 -2i , 2*(n-i)-1
//  *******  -1    |  1    7      1  |
//   *****   -2    |  2    5      2  |
//    ***    -3    |  3    3      3  |
//     *     -4    |  4    1      4  |
// -------------------------------------------------------------------------------------------------------------------------------------------------
// Print the pattern in the function given to you.
// -------------------------------------------------------------------------------------------------------------------------------------------------

class Solution {
public:
    void pattern8(int n) {
        for(int i=0;i<n;i++){ // i=0 ; i--> 0,1,2,3,4
            // space
            for(int j=0;j<=i;j++){ // i=0; j--> 0
                cout <<" ";
            }
            // stars
            for(int j=0; j<2*(n-i)-1;j++){ // i=0; j--> 0,1,2,3,4,5,6,7,8
                cout <<"*";
            }
            // space
            for(int j=0;j<=i;j++){ // i=0; j--> o
                cout <<" ";
            }
            // next row
            cout << endl;

        }

    }
};

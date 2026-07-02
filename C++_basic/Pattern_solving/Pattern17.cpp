// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// ------------------------------------------------------------------------------------------------------------------------------------------------
//                    n=5       space     alphabet     space  n-i-1 
//     A -0                       4          1           4
//    ABA  -1                     3          3           3
//   ABCBA  -2                    2          5           2
//  ABCDCBA  -3                   1          7           1
// ABCDEDCBA  -4                  0          9           0
// ------------------------------------------------------------------------------------------------------------------------------------------------
// Print the pattern in the function given to you.
// ------------------------------------------------------------------------------------------------------------------------------------------------
// i=0,1,2,3,4 , n=5 
// 1= i*2+1
// ---------------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
public:
    void pattern17(int n) {
        for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        char ch = 'A';

        int breakpoint = (2 * i + 1) / 2;

        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;
            if (j <= breakpoint) ch++;
            else ch--;
        }
          
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }

    }
};

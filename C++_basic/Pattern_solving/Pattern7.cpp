//  Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// ------------------------------------------------------------------------------------------------------------------------------------------------
//                  | space  stars   space  |(n-i-1) --> formula for Space
//     * - 0        |   4      1       4    |(i*2+1) --> formula for stars
//    *** - 1       |   3      3       3    |
//   ***** - 2      |   2      5       2    |
//  ******* - 3     |   1      7       1    |
// ********* - 4    |   0      9       0    |
// -------------------------------------------------------------------------------------------------------------------------------------------------
// Print the pattern in the function given to you.
// -------------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
public:
    void pattern7(int n) {
        for(int i=0; i<n;i++){ // 0 , 1 , 2 , 3  --> n=4
            // space
            for(int j=0; j< n-i-1;j++){ // i=0, j--> 0,1,2,
                cout<<" ";
            }
            
            // stars
            for(int j=0; j< 2*i+1;j++){ // i=0, j--> 0 , i=1 , j--> 0,1,2 , i=2 ,j--> 0,1,2,3 ,i=3 ,j--> 0,1,2,3,4,5,6,
                cout<<"*";
            }

            // space
            for(int j=0; j<n-i-1;j++){ // i=0, j--> 0,1,2
                cout<<" ";
            }
            cout << endl;

        }

    }
};

// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// -------------------------------------------------------------------------------------------------------------------------------------------------
//           n=5 (index)   pattern           space       pattern
// 1        1 --> 0           1                8            1
// 12      21 --> 1           2                6            2
// 123    321 --> 2           3                4            3
// 1234  4321 --> 3           4                2            4
// 1234554321 --> 4           5                0            5
//                       (j<=i, print j)    2*(n-i)       (j<=i, print j)
// -------------------------------------------------------------------------------------------------------------------------------------------------
// Print the pattern in the function given to you.
// -------------------------------------------------------------------------------------------------------------------------------------------------

  class Solution {
public:
    void pattern12(int n) {
        
        for (int i = 0; i <=n; i++) {

        // pattern
        for(int j=1;j<=i;j++){
            cout << j;
        }
        
        // space
        for(int j=0;j<2*(n-i);j++){ 
            cout << " ";
        }
        
        // pattern
        for(int j=i;j>0;j--){
            cout << j;
        }
        
        cout << endl;
    }


    }
};

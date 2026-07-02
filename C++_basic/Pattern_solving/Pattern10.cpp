// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// ---------------------------------------------------------------------------------------------------------------------------------------------------
//    n=5 (2*n-1/2*n)            Stars        
// * -1                   if (i>n)2*n-i --> 10 -i ()
// ** -2
// *** -3
// **** -4
// ***** -5
// **** -6
// *** -7
// ** -8
// * -9
// --------------------------------------------------------------------------------------------------------------------------------------------------
// Print the pattern in the function given to you.
// --------------------------------------------------------------------------------------------------------------------------------------------------

class Solution {
public:
    void pattern10(int n) {
        for(int i= 1 ; i<2*n;i++){
        
            int stars = i;
          // for the second half of the rotated triangle.
          if(i>n) stars = 2*n-i;
          
          // for printing the stars in each row.
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
            cout << endl;
            
        }

    }
};

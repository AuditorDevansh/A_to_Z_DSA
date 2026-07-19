// Q: Sum of First N Numbers
// Given an integer N, return the sum of first N natural numbers. Try to solve this using recursion.
// -------------------------------------------------------------------------------------------------
// Example 1
// Input : N = 4
// Output : 10
// Explanation : first four natural numbers are 1, 2, 3, 4.
// Sum is 1 + 2 + 3 + 4 => 10.
// -------------------------------------------------------------------------------------------------
  
class Solution{	
	public:
		int NnumbersSum(int N){
            if(N==1)
            return 1;
            return N + NnumbersSum(N-1);
        		}
};

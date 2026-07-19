// Q: Reverse an array
// Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.
// -----------------------------------------------------------------------------------------------------------------
// Example 1
// Input: n=5, arr = [1,2,3,4,5]
// Output: [5,4,3,2,1]
// Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]
// -----------------------------------------------------------------------------------------------------------------

class Solution {
private:
    void reverseHelper(int arr[], int start, int last) {
        if (start >= last) return; // Base case
        
        swap(arr[start], arr[last]);
        
        // Recursive call with updated boundaries
        reverseHelper(arr, start + 1, last - 1);
    }

public:
    void reverse(int arr[], int n) {
        // Call the helper using 0 and n - 1
        reverseHelper(arr, 0, n - 1);
    }
};

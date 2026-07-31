// // Selection Sort
// Given an array of integers nums, sort the array in non-decreasing order using the selection sort algorithm and return the sorted array.
// A sorted array in non-decreasing order is an array where each element is greater than or equal to all previous elements in the array.
// -------------------------------------------------------------------------------------------------------------------------------------------
// Example 1
// Input: nums = [7, 4, 1, 5, 3]
// Output: [1, 3, 4, 5, 7]
// Explanation: 1 <= 3 <= 4 <= 5 <= 7.
// Thus the array is sorted in non-decreasing order.
// --------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
public:
    vector<int> selectionSort(vector<int> &arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            int minIdx = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIdx]) {
                    minIdx = j;
                }
            }
            swap(arr[i], arr[minIdx]);
        }
        return arr; // Return the sorted vector
    }
};

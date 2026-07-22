// Q: Counting Frequencies of Array Elements
// ------------------------------------------------------------------------------------------------------------------
// Given an array nums of size n which may contain duplicate elements.
// Rreturn a list of pairs where each pair contains a unique element from the array and its frequency in the array.
// You may return the result in any order, but each element must appear exactly once in the output.
// ------------------------------------------------------------------------------------------------------------------
// Example 1
// Input: nums = [1, 2, 2, 1, 3]
// Output: [[1, 2], [2, 2], [3, 1]]
// Explanation:
// - 1 appears 2 times
// - 2 appears 2 times
// - 3 appears 1 time
// Order of output can vary.
// -----------------------------------------------------------------------------------------------------------------
class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        unordered_map<int, int> map;
        
        // Count frequencies of each element
        for (int num : nums) {
            map[num]++;
        }
        
        // Prepare the result list of pairs
        vector<vector<int>> result;
        for (auto x : map) {
            result.push_back({x.first, x.second});
        }
        
        return result;
    }
};

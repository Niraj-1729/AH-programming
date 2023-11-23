// problem link :- https://leetcode.com/problems/arithmetic-subarrays/?envType=daily-question&envId=2023-11-23

class Solution {
public:
    // Method to check if subarrays are arithmetic sequences
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> results; // This will store the boolean results for each query
      
        // Internal lambda function to check if a single subarray is an arithmetic sequence
        auto isArithmetic = [](const vector<int>& nums, int left, int right) -> bool {
            unordered_set<int> elements; // To store unique elements for checking
            int size = right - left + 1;
            int minElement = INT_MAX, maxElement = INT_MIN;
          
            // Find the min and max elements within the subarray
            for (int i = left; i <= right; ++i) {
                elements.insert(nums[i]);
                minElement = min(minElement, nums[i]);
                maxElement = max(maxElement, nums[i]);
            }
          
            // An arithmetic sequence should have a common difference 'd',
            // and satisfy (maxElement - minElement) % (size - 1) == 0
            if ((maxElement - minElement) % (size - 1)) {
                return false;
            }
          
            // Calculate the common difference between consecutive elements
            int commonDifference = (maxElement - minElement) / (size - 1);
          
            // Verify each element of the theoretical arithmetic sequence
            for (int i = 1; i < size; ++i) {
                if (!elements.count(minElement + (i - 1) * commonDifference)) {
                    return false;
                }
            }
          
            return true;
        };
      
        // Iterate over each range query (l and r vectors) to check each subarray
        for (size_t i = 0; i < l.size(); ++i) {
            results.push_back(isArithmetic(nums, l[i], r[i])); // Store the result for each subarray
        }
      
        return results; // Return the results for all queries
    }
};
class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
      // The sum can exceed the capacity of a 32-bit integer, so we use long long.
        long long max_median_sum = 0;
        int n = nums.size();
        
        // Step 1: Sort the vector to easily identify the smallest and largest elements.
        // Time complexity for sort is O(N log N).
        std::sort(nums.begin(), nums.end());
        
        // Step 2 & 3: Iterate and sum the medians based on the greedy strategy.
        // The medians we choose are at indices n/3, n/3 + 2, ..., n-2 (0-based).
        // This loop runs n/3 times, so its complexity is O(N).
        for (int i = n / 3; i < n; i += 2) {
            max_median_sum += nums[i];
        }
        
        return max_median_sum;
    }
};
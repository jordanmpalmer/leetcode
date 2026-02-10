#include <bits/stdc++.h>

class Solution {
  public:
    std::vector<int> numsValue;
    std::vector<int> resultValue;
    int kValue;

    std::vector<int> topKFrequent(std::vector<int> &nums, int k) {

        std::unordered_map<int, int> numberMap;

        for (const auto &n : nums) {
            numberMap[n]++;
        }

        std::vector<int> resultKey(k);
        std::vector<int> resultVal(k);
        for (const auto &[key, val] : numberMap) {
            auto min_it = std::min_element(resultVal.begin(), resultVal.end());
            int index = std::distance(resultVal.begin(), min_it);
            if (val > resultVal[index]) {
                resultVal[index] = val;
                resultKey[index] = key;
            }
        }

        numsValue = nums;
        kValue = k;
        resultValue = resultKey;
        return resultKey;
    }

    void printValues() {
        std::cout << "=========================" << std::endl;
        std::cout << "kValue: " << kValue << std::endl;

        std::cout << "numsValue: ";
        for (const auto &n : numsValue) {
            std::cout << n << ", ";
        }
        std::cout << std::endl;

        std::cout << "resultValue: ";
        for (const auto &n : resultValue) {
            std::cout << n << ", ";
        }
        std::cout << std::endl;
        std::cout << "=========================" << std::endl;
    }
};

// Given an integer array nums and an integer k, return the k most frequent elements within the
// array.
//
// The test cases are generated such that the answer is always unique.
//
// You may return the output in any order.
//
// Example 1:
//
// Input: nums = [1,2,2,3,3,3], k = 2
//
// Output: [2,3]
// Example 2:
//
// Input: nums = [7,7], k = 1
//
// Output: [7]
// Constraints:
//
// 1 <= nums.length <= 10^4.
// -1000 <= nums[i] <= 1000
// 1 <= k <= number of distinct elements in nums.
int main() {

    Solution sol;

    std::vector<int> nums{1, 2, 2, 3, 3, 3};
    int k{2};

    sol.topKFrequent(nums, k);
    sol.printValues();

    nums = {1, 2};
    sol.topKFrequent(nums, k);
    sol.printValues();

    nums = {2, 3, 4, 1, 4, 0, 4, -1, -2, -1};
    sol.topKFrequent(nums, k);
    sol.printValues();

    nums = {-1, 1, 4, -4, 3, 5, 4, -2, 3, -1};
    k = 3;
    sol.topKFrequent(nums, k);
    sol.printValues();

    nums = {1, 1, 1, 2, 2, 3};
    k = 2;
    sol.topKFrequent(nums, k);
    sol.printValues();

    return 0;
}

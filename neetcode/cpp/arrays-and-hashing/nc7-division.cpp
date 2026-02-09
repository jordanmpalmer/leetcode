#include <bits/stdc++.h>
#include "../headers/lc_debug.h"

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums) {

        size_t nums_size{nums.size()};

        int sum{1}, zeros{0};
        for (int num : nums) {
            if (num == 0) {
                zeros++;
            } else {
                sum *= num;
            }
        }

        if (zeros > 1) {
            return vector<int>(nums_size, 0);
        }

        vector<int> res(nums_size);

        for (size_t i = 0; i < nums.size(); ++i) {
            if (zeros == 0) {
                res[i] = sum/nums[i];
            } else {
                res[i] = (nums[i] == 0) ? sum : 0;
            }
        }

        return res;
    }
};


// Given an integer array nums, return an array output where output[i] is the product of all the elements of nums except nums[i].
//
// Each product is guaranteed to fit in a 32-bit integer.
//
// Follow-up: Could you solve it in 
// O
// (
// n
// )
// O(n) time without using the division operation?
//
// Example 1:
//
// Input: nums = [1,2,4,6]
//
// Output: [48,24,12,8]
// Example 2:
//
// Input: nums = [-1,0,1,2,3]
//
// Output: [0,-6,0,0,0]
// Constraints:
//
// 2 <= nums.length <= 1000
// -20 <= nums[i] <= 20
int main() {

    Solution sol;
    vector<int> input{1,2,4,6};

    println(sol.productExceptSelf(input));

    println("===============================");

    input = {-1,0,1,2,3};
    println(sol.productExceptSelf(input));

    println("===============================");

    input = {-1,0,1,0,3};
    println(sol.productExceptSelf(input));

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> combos;

        for (int i = 0; i < nums.size(); ++i){
            int diff = target - nums[i];
            if (combos.find(diff) != combos.end()) {
                return {combos[diff], i};
            }
            combos[nums[i]] = i;
        }
        return {};

    }
};

int main() {
    Solution sol;
    vector<int> nums {3, 4, 5, 6};

    // cout << "test: " << sol.twoSum(nums, 7) << endl;

    vector<int> test;
    test = sol.twoSum(nums, 7);
    for (int n : test) {
        cout << n << endl;
    }

    return 0;

}

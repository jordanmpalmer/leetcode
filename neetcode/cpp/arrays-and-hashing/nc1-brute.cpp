#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool hasDuplicate(vector<int> &nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }

        return false;
    }
};

int main() {
    // Create instance of Solution class
    Solution sol;

    vector<int> numbers = {1, 2, 3, 4, 1};

    // Function call to take input and display output
    sol.hasDuplicate(numbers);

    return 0;
}

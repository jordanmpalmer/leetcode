#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool hasDuplicate(vector<int> &nums) {
        unordered_set<int> mySet;

        for (int num : nums) {
            if (mySet.find(num) != mySet.end()) {
                return true;
            }
            mySet.insert(num);
        }
        return false;
    }
};

int main() {
    // Create instance of Solution class
    Solution sol;

    vector<int> numbers = {1, 2, 3, 4, 1};
    bool output;

    // Function call to take input and display output
    output = sol.hasDuplicate(numbers);
    cout << output;

    return 0;
}

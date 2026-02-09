#include "../headers/lc_debug.h"
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> solve(vector<int>& nums) {
        return {"done", "example"};
    }
};

int main() {
    Solution sol;
    vector<int> input = {1, 2, 3};
    
    // Test multiple types instantly
    println(10);             // Prints int
    println(3.14f);          // Prints float
    println("Result:");      // Prints string
    println(sol.solve(input)); // Prints vector<string>
    
    return 0;
}

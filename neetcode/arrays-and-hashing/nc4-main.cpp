#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> result {{}};
        vector<string>
        for (string str : strs) {
            sort(str.begin(), str.end());
            result[0].push_back(str);
        }

        return result;
    }
};

void printInt(int i) {
    cout << i << endl;
}

void printVector(vector<string> i) {
    for (string val : i) {
        cout << val << endl;
    }
}

void printNestedVector(vector<vector<string>> i) {
    for (vector<string> j : i) {
        for (string val : j) {
            cout << val << endl;
        }
    }
}
// Group Anagrams
// Given an array of strings strs, group all anagrams together into sublists. You may return the output in any order.
//
// An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.
//
// Example 1:
//
// Input: strs = ["act","pots","tops","cat","stop","hat"]
//
// Output: [["hat"],["act", "cat"],["stop", "pots", "tops"]]
// Example 2:
//
// Input: strs = ["x"]
//
// Output: [["x"]]
// Example 3:
//
// Input: strs = [""]
//
// Output: [[""]]
// Constraints:
//
// 1 <= strs.length <= 1000.
// 0 <= strs[i].length <= 100
// strs[i] is made up of lowercase English letters.
int main() {
    Solution sol;
    vector<vector<string>> result;

    vector<string> input {"act", "pots", "tops", "cat", "stop", "hat"};

    result = sol.groupAnagrams(input);

    printNestedVector(result);

    return 0;
}


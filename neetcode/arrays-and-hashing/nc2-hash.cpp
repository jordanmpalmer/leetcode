#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map_a;
        unordered_map<char, int> map_b;

        for (char ch : s) {
            map_a[ch]++;
        }

        for (char ch : t) {
            map_b[ch]++;
        }

        if (map_a == map_b) {
            return true;
        }

        return false;
    }
};

int main() {
    Solution sol;
    string string1 {"racecars"};
    string string2 {"racecars"};

    cout << "isAnagram: " << sol.isAnagram(string1, string2) << endl;

    return 0;
}

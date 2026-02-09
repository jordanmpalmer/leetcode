#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};

int main() {
    Solution sol;
    string string1 {"racecars"};
    string string2 {"racecars"};

    cout << "isAnagram: " << sol.isAnagram(string1, string2) << endl;

    return 0;
}

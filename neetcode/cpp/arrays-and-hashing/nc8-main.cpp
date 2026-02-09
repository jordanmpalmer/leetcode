#include <bits/stdc++.h>
#include "../headers/lc_debug.h"

using namespace std;

class Solution {
public:
    bool isValidSodoku(vector<vector<char>> &board) {
        println(board);
        return true;
    }

};

int main() {
    Solution sol;

    vector<vector<char>> board(3, vector<char>(4, 'u'));

    println(sol.isValidSodoku(board));

    return 0;
}

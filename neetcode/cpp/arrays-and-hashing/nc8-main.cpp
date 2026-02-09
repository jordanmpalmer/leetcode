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

    std::vector<std::vector<char>> board = {
        {'1','2','.','.','3','.','.','.','.'},
        {'4','.','.','5','.','.','.','.','.'},
        {'.','9','8','.','.','.','.','.','3'},
        {'5','.','.','.','6','.','.','.','4'},
        {'.','.','.','8','.','3','.','.','5'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','.','.','.','.','.','2','.','.'},
        {'.','.','.','4','1','9','.','.','8'},
        {'.','.','.','.','8','.','.','7','9'}};

    println(sol.isValidSodoku(board));

    return 0;
}

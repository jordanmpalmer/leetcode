#include <bits/stdc++.h>
// using namespace std;

class Solution {
  public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string> &strs) {

        std::vector<std::vector<std::string>> results;
        std::unordered_map<std::string, std::vector<std::string>> hashMap;
        for (const auto &str : strs) {
            std::array<int, 26> map_index{};
            for (char ch : str) {
                map_index[ch - 'a']++;
            }

            std::string hashIndex = "";
            for (int val : map_index) {
                hashIndex.append(std::to_string(val) + ',');
            }
            hashMap[hashIndex].push_back(str);
        }
        for (const auto &pair : hashMap) {
            results.push_back(pair.second);
        }

        return results;
    }
};

void printAnswer(std::vector<std::vector<std::string>> result) {
    std::cout << "===================" << std::endl;
    for (std::vector<std::string> vec : result) {
        for (std::string str : vec) {
            std::cout << str << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "===================" << std::endl;
}

int main() {
    Solution sol;

    std::vector<std::string> input1{"act", "pots", "tops", "cat", "stop", "hat"};
    std::vector<std::vector<std::string>> results;
    std::vector<std::string> input2{"bdddddddddd", "bbbbbbbbbbc"};

    printAnswer(sol.groupAnagrams(input1));
    printAnswer(sol.groupAnagrams(input2));

    return 0;
}

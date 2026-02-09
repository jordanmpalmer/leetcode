#include <bits/stdc++.h>

class Solution {
public:
    std::string encode(std::vector<std::string>& strs) {

        std::string output{""};
        for (const auto & str : strs) {
            output += std::to_string(str.size()) + "#" + str;
        }
        return output;

    }

    std::vector<std::string> decode(std::string s) {

        std::vector<std::string> output;
        size_t i{0};

        while (i < s.size()) {
            size_t separatorPos = s.find('#', i);
            int len = std::stoi(s.substr(i, separatorPos - i));

            output.push_back(s.substr(separatorPos + 1, len));

            i = separatorPos + len + 1;

        }


        return output;
    }
};

// Design an algorithm to encode a list of strings to a string. The encoded string is then sent over the network and is decoded back to the original list of strings.
//
// Machine 1 (sender) has the function:
//
// string encode(vector<string> strs) {
//     // ... your code
//     return encoded_string;
// }
// Machine 2 (receiver) has the function:
//
// vector<string> decode(string s) {
//     //... your code
//     return strs;
// }
// So Machine 1 does:
//
// string encoded_string = encode(strs);
// and Machine 2 does:
//
// vector<string> strs2 = decode(encoded_string);
// strs2 in Machine 2 should be the same as strs in Machine 1.
//
// Implement the encode and decode methods.
//
// Example 1:
//
// Input: dummy_input = ["Hello","World"]
//
// Output: ["Hello","World"]
//
// Explanation:
// Machine 1:
// Codec encoder = new Codec();
// String msg = encoder.encode(strs);
// Machine 1 ---msg---> Machine 2
//
// Machine 2:
// Codec decoder = new Codec();
// String[] strs = decoder.decode(msg);
// Example 2:
//
// Input: dummy_input = [""]
//
// Output: [""]
//
// Constraints:
//
// 0 <= strs.length < 100
// 0 <= strs[i].length < 200
// strs[i] contains any possible characters out of 256 valid ASCII characters.
//
// Follow up: Could you write a generalized algorithm to work on any possible set of characters?
int main() {
    Solution sol;
    std::vector<std::string> input {"neet","code","love","you"};

    std::string output1 {};
    output1 = sol.encode(input);
    std::cout << "Encoded string: " << output1 << std::endl;

    std::vector<std::string> output2 {};
    output2 = sol.decode(output1);
    std::cout << "Decoded strings: ";
    for (const auto & str : output2) {
        std::cout << str << ", ";
    }
    std::cout << std::endl;

    return 0;
}

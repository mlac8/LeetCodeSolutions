//
// Created by Mark Lacanilao on 7/30/25.
//

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // group all anagrams together into sub lists
        // Aim for O(m * n) time complexity, and O(m) space complexity

        // Solution: USE HASH map

        unordered_map<string, vector<string>> res; // vector within vector!
        // WILL REVIEW THIS ANSWER STEP BY STEP LATER!!!!
        // iterates throgh each string in the input array
        for (const auto& s : strs) {
            vector<int> count(26, 0);
            for (char c : s) { // character frequency counter
                count[c - 'a']++;
            }

                // key generation
            string key = to_string(count[0]);
            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(count[i]);
            }
            res[key].push_back(s);
        }

        // creates final result vector. iterates through each key-value pair in the hash map.
        vector<vector<string>> result;
        for (const auto& pair : res) {
            result.push_back(pair.second);
        }
        return result;
    }
};
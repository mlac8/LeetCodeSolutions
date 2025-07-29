//
// Created by Mark Lacanilao on 7/29/25.
//

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // aim for O(n) space and time complexity

        // Hash Map (one press)

        int n = nums.size(); // n represents length of Array
        unordered_map<int, int> prevMap; // vector that maps both ints

        // loop to
        for (int i = 0; i < n; i++) {
            int diff = target - nums[i]; // measures difference between target and size of array
            if (prevMap.find(diff) != prevMap.end()) {
                return {prevMap[diff], i};

            }

            // insert.... i did not understand this problem. will revisit later.
            prevMap.insert({nums[i], i});
        }

        return {};

    }
};
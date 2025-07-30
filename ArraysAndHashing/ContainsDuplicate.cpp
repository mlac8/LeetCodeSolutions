//
// Created by Mark Lacanilao on 7/30/25.
//

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // use hash set for O(n) time AND space complexity!

        // a vector to store a set of ints
        unordered_set<int> seen;

        // loop
        for (int num : nums){

            //check if the number has already been seen
            if (seen.count(num)){
                return true; // number has been seen
            }
            seen.insert(num); // adds unseen number to seen set!
            // again, only if unseen in that conditional
        }
        return false; // all other conditions (aka unseen numbers)
    }
};
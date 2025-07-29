//
// Created by Mark Lacanilao on 7/26/25.
//

class Solution {
public:
    bool isAnagram(string s, string t) {

        //USE A HASHMAP FOR OPTIMAL SOLUTION

        // conditional to check lengths of s & t strings


        if (s.length() != t.length()) {
            return false; // if s and t don't have same length, FALSE
        }

        // create TWO UNORDERED MAPS. you could make one to save on
        // space compelxity. will update this repo when i go back to do it
        unordered_map<char, int> countS;
        unordered_map<char, int> countT; // stores every possible int and char

        // loop to count chars and ints
        for (int i = 0; i < s.length(); i++) {
            countS[s[i]]++;
            countT[t[i]]++;
        }

        // this will return TRUE but only IF the count of each char and int is
        // equal between both strings.
        return countS == countT;
    }

};
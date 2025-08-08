//
// Created by Mark Lacanilao on 7/30/25.
//

class Solution {
public:
    bool isPalindrome(string s) {
        // Aim for O(n) time complexity and O(1) space complexity!
        // solution: TWO POINTERS!!!

        // initializes amount to count from
        int l = 0, r = s.length() - 1;

        while (l < r) {
            while (l < r && !alphaNum(s[l])) {
                l++; // basically, add to empty string length every time
                // l is less than r?
            }

            while (r > l && !alphaNum(s[r])) {
                r--; // subtract from r if it's longer than l and not an alphanumeric char
            }

            if (tolower(s[l]) != tolower(s[r])) {
                return false;
            } // if the count of each char amount in each string is not equal

            l++;
            r--;
        }
        return true; // if untrue conditions above are not met
    }

    // bool that determines if character is within alphanumeric limits!
    bool alphaNum(char c) {
        return (c >= 'A' && c <= 'Z' ||
                c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');
    }

};
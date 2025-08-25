//
// Created by Mark Lacanilao on 8/8/25.class Solution {
public:
    bool isValid(string s) { // stack and hashmp needed!
        std::stack<char> stack;
        std::unordered_map<char, char> closeToOpen = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (char c : s) {
            if (closeToOpen.count(c)) {
                if (!stack.empty() && stack.top() == closeToOpen[c]) {
                    stack.pop();
                } else {
                    return false;
                }
            } else {
                stack.push(c);
            }
        }
        return stack.empty();
    }
    // time: O(n)
    // space: O(n)
};
//

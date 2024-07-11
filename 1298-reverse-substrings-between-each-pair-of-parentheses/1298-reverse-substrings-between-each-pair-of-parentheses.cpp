class Solution {
public:
    string reverseParentheses(string s) {
        // // cout << s.length() <<endl;
        // string ans = "";
        // for (int i = s.length()-1; i < s.length(); i--){
        //     if (s[i] == "(" || s[i] == ")") continue;
        //     ans += s[i];
        //     // cout << s[i] <<endl;
        // }

        // return ans;
        std::stack<std::string> stk;
        std::string current;

        for (char ch : s) {
            if (ch == '(') {
                stk.push(current);
                current.clear();
            } else if (ch == ')') {
                std::reverse(current.begin(), current.end());
                if (!stk.empty()) {
                    current = stk.top() + current;
                    stk.pop();
                }
            } else {
                current += ch;
            }
        }

        return current;
    }
};
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

        stack<string> stk;
        string current;

        for (char ch : s) {
            if (ch == '(') {
                stk.push(current);
                current.clear();
            } else if (ch == ')') {
                reverse(current.begin(), current.end());
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

/*

"(u(love)i)"
    u evol i
    i love u

Programatic approach:
 when ")" we will use stack -> evol until "("

 i + stack -> i love

 finally i love u


"(ed(et(oc))el)"
    ed etco el
    ed octe el
    leetcode

Programatic approach:
    le

    if "(" and the again "(" -> etco
    le + etco + de
*/

// string ans = "";
// stack<string> stk;

// for (int i = s.length() - 1; i < s.length(); i--) {
//     if (s[i] == ")") {
//         if (s[i - 1] != ")") {
//             continue;
//         } else {
//             while (s[i] != "(") {
//                 if (s[i] != "(" {
//                     stk.push(s[i]);
//                 }
//             }
//         }
//     }

//     ans += s[i];
// }

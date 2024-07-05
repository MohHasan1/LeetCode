/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        vector<int> ans;
        vector<int> critialPos;
        int curPost = 1;

        ListNode* first = head;
        ListNode* second = first->next;
        ListNode* third = second->next;

        if (second == nullptr || third == nullptr) {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        } else {
            while (third != nullptr) {
                if (second->val > first->val && second->val > third->val ||
                    second->val < first->val && second->val < third->val) {
                    critialPos.push_back(curPost);
                }

                first = first->next;
                second = second->next;
                third = third->next;
                curPost++;
            }

            // cal max and min
            int n = critialPos.size() - 1;

            // edge case:
            if (n + 1 <= 1) {
                ans.push_back(-1);
                ans.push_back(-1);
                return ans;
            }

            int maxVal = critialPos[n] - critialPos[0];
            int minVal = INT_MAX;
            
            for (int i = 1; i < critialPos.size(); i++) {
               int val =  critialPos[i] - critialPos[i-1];
               minVal = min(minVal, val);
            }

            ans.push_back(minVal);
            ans.push_back(maxVal);
        }

        return ans;
    }
};
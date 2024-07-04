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
    ListNode* mergeNodes(ListNode* head) {

        int sum = 0;
        ListNode* tail = head;

        ListNode* newHead = nullptr;

        ListNode* prevNode = nullptr;

        while (tail != nullptr) {
            tail = tail->next;
            if (tail == nullptr) break; 
            sum += tail->val;
            if (tail->val == 0) {
                head = tail;

                // create a linklist:
                // newHead->val = sum;
                ListNode* tempNode = new ListNode(sum);

                if (newHead == nullptr){
                    prevNode = newHead = tempNode;
                } else {
                    prevNode->next = tempNode;
                    prevNode = tempNode;
                }


                // reset sum
                sum = 0;
            }
        }

        return newHead;
    }
};
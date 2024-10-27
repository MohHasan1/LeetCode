/**
 * Definition for singly-linked list.
 * class ListNode {
 *     val: number
 *     next: ListNode | null
 *     constructor(val?: number, next?: ListNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.next = (next===undefined ? null : next)
 *     }
 * }
 */

function middleNode(head: ListNode | null): ListNode | null {
    // using the turtoise and hare method:
    let slow = head, fast = head;

    // fast.next !== null coz we want to point the  the second middle node in odd linklist.
    while (fast !== null && fast.next !== null) {

        // slow moves once:
        slow = slow.next;

        // fast moves twice:
        fast = fast.next.next;
    }

    return slow;
};
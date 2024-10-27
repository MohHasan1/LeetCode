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

function reverseList(head: ListNode | null): ListNode | null {
    let curNode = head, nextNode = null, prevNode = null;

    while (curNode != null) {
        nextNode = curNode.next;
        curNode.next = prevNode;

        prevNode = curNode;

        curNode = nextNode;
    } 

    return prevNode;
};
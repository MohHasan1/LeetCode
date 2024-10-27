// /**
//  * Definition for singly-linked list.
//  * class ListNode {
//  *     val: number
//  *     next: ListNode | null
//  *     constructor(val?: number, next?: ListNode | null) {
//  *         this.val = (val===undefined ? 0 : val)
//  *         this.next = (next===undefined ? null : next)
//  *     }
//  * }
//  */

function reverseBetween(head: ListNode | null, left: number, right: number): ListNode | null {
    // edge case:
    if (head === null || head.next === null, left === right) return head;

    // reversal vars:
    let curNode = head, nextNode=null, prevNode=null;

    // misc vars:
    let curPos = 1, startNode = head, revTailNode= null;

    // iterate to the left-th node: (not changing any thing just storing and iterating)
    while (curPos !== left) {
        // the node before the left node - (left-1)
        startNode = curNode;
        curNode = curNode.next;
        curPos++;
    }

    // this left node will be the tail when reversed:
    revTailNode = curNode;

    // start the reversing process
    while (curPos !== right+1) {
        nextNode = curNode.next;
        curNode.next = prevNode;

        prevNode = curNode; 

        curNode = nextNode;
        curPos++;
    }

    // prevNode holds the reversed linklist:
    startNode.next = prevNode;
    // startnode.next.next (not always work so we pre-save)
    revTailNode.next = curNode;

    if (left > 1) return head;
    return prevNode
}

// function reverseBetween(head: ListNode | null, left: number, right: number): ListNode | null {

//     if (head.next === null) return head;
//     if (head === null) return null;

//     const start: number = left - 1;
//     let curPos: number = 1;

//     let curNode: ListNode = head;
//     let startNode: ListNode;
//     let prevNode: ListNode;
//     let rightNode: ListNode;
//     let leftNode: ListNode;


//     while (curPos > left+1) {
//         const nextNode: ListNode = curNode.next;

//         // is it the start node
//         if (curPos === start) {
//             startNode = curNode;
//         }

//         // if it is the right node: 
//         if (curPos === left) {
//             // storing
//             leftNode = curNode;

//             leftNode.next=null;
//             // storing the current node
//             prevNode = curNode;
//         }

//         // if curPos is greater than but less than left we continue teh reverse.
//         if (curPos > left && curPos <= right) {
//             curNode.next = prevNode;
//             // storing the current node
//             prevNode = curNode;
//         }

//         // we are done reversing time to get all the pointers pointing to the right node.
//         if (curPos > right) {
//             // if left in in between
//             if (startNode) {
//                 startNode.next = prevNode;
//                 leftNode.next = curNode;
//             } 
            
//             break;
//         }

//         // !nextNode ? curNode = nextNode : curNode = curNode.next
//         curNode = nextNode;
//         curPos++;

//     }

//     return head
// };
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
function isPalindrome(head: ListNode | null): boolean {
    let curr = head;
    let string = ""

    // extract the values
    while (curr) {
        string += curr.val;
        curr = curr.next;
    }

    // palindrome check (method-1 - inwards)
    let start = 0, end = string.length -1 ;
    
    while (start < end) {
        if (string[start] !== string[end]) return false;
        start++;
        end--;
    }

    return true
}

// function isPalindrome(head: ListNode | null): boolean {
//     // get to the middel of the link list
//     let slow = head, fast = head;

//     while (fast.next !== null && fast.next.next !== null) {
//         slow = slow.next;
//         fast = fast.next.next;
//     }

//     // check if ll is odd(fast.next === null) or even(fast.next.next === null or fast === null) (s = middle or s = middle+1)
//     let start, end;

//     // odd
//     if (fast.next === null) {
//         start = end = slow;
//     } else {
//         start = slow;
//         end = slow.next
//     }

//     // palindrome check
//     while (start !== null && end !== null) {
//         if (start.val !== end.val) return false;
//         start = start.next;
//         end = end.next.next;
//     }

// };
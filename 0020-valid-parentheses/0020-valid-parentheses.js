/**
 * @param {string} s
 * @return {boolean}
 */

const brac = {
    "(": ")",
    "[": "]",
    "{": "}"
}
var isValid = function (s) {

    const stack = [];
    // if right bracket:
    for (const c of s) {
        // If one of the brackets:
        if (brac[c]) {
            stack.push(c);
        } else {
            // check if we get the right coresponding left bracket:
            const leftBrac = stack.pop(); // right
            const correctBrac = brac[leftBrac]; // left

            if (c !== correctBrac) return false;
        }
    }

    if (stack.length !=== 0) return false
    return true
};
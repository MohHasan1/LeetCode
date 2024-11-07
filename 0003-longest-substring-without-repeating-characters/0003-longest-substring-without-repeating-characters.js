/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {

    if (s.length <= 1) return s.length

    let lc = 0
    let long = 0

    for (let i = 0; i < s.length; i++) {
        // reset - cache
        const hash = {}

        for (let j = i; j < s.length; j++){
            if (!hash[s[j]]) {
                hash[s[j]] = 1
                lc++;
            } else {
                long = Math.max(long, lc);
                lc = 0;
                break;
            }
        }

        long = Math.max(long, lc);
        lc = 0;
    }

    return long
};
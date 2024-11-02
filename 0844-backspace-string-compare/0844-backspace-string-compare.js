/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var backspaceCompare = function(s, t) {
    let a = s.length - 1, b = t.length - 1;
    let aCount = 0, bCount = 0;

    while (a >= 0 || b >= 0) {
        // Process backspaces in s
        while (a >= 0) {
            if (s[a] === "#") {
                aCount++;
                a--;
            } else if (aCount > 0) {
                a--;
                aCount--;
            } else {
                break;
            }
        }

        // Process backspaces in t
        while (b >= 0) {
            if (t[b] === "#") {
                bCount++;
                b--;
            } else if (bCount > 0) {
                b--;
                bCount--;
            } else {
                break;
            }
        }

        // Check if characters are the same or both are exhausted
        if (a >= 0 && b >= 0 && s[a] !== t[b]) {
            return false;
        }
        
        // If only one is exhausted, they are not equal
        if ((a >= 0) !== (b >= 0)) {
            return false;
        }

        a--;
        b--;
    }

    return true;
};

function isPalindrome(s: string): boolean {

    // edge case:
    if (s.length === 0 || s.length === 1) return true;

    // pre -  the str
    s = s.replace(/[^A-Za-z0-9]/g, "").toLowerCase();

    let start = 0, end = s.length - 1;
    // test time (tech-1 moving inwards)
    // odd => start === end
    // even => start will never equal end 
    while (start <= end) {
        // if at any point the start's and end's values does not match: 
        if (s[start] !== s[end]) return false;

        // inc
        start++;
        // dec
        end--;
    }

    return true;

    // aabbaa (even)
    // aba (odd)
};
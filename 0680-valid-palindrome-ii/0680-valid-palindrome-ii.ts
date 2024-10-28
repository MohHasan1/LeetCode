
// function isPalindrome(str: string, start: number, end: number): boolean {
//     while (start <= end) {
//         if (str[start] !== str[end]) return false
//     }
//     return true
// }

function validPalindrome(s: string) {
    // using closure
    function isPalindrome(str: string, s: number, e: number) {
        while (s <= e) {
            if (str[s] !== str[e]) return { status: false, start: s, end: e }
            s++;
            e--;
        }
        return { status: true, start: s, end: e }
    }

    let start = 0, end = s.length - 1;
    // max 3 times -  i would need to call the isPalindrome function:
    const res = isPalindrome(s, start, end);

    if (res.status) {
        return true;
    }

    // create 1st str (remove right char)
    // let newStr = s.slice(0, res.start) + s.slice(res.start + 1)
    let isPel = isPalindrome(s, res.start + 1, res.end);
    if (isPel.status) {
        return true;
    }


    // craete 2nd str (remove left char)
    isPel = isPalindrome(s, res.start, res.end - 1);
    if (isPel.status) {
        return true;
    }

    return false
};
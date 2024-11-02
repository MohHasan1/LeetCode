function finalStr(s: string) {
    const strArr = [];

    for (const c of s) {
        if (c !== "#") {
            strArr.push(c);
        } else {
            strArr.pop()
        }

    }
    console.log(strArr)
    return strArr.toString()
}

function backspaceCompare(s: string, t: string): boolean {
    return finalStr(s) === finalStr(t)
};
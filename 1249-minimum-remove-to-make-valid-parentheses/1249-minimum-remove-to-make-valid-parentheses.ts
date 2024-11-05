function minRemoveToMakeValid(s: string): string {


    // strore the index of the "("
    const stack = [];

    const str = s.split("");

    for (let i = 0; i < str.length; i++) {
        if (str[i] === "(") { stack.push(i); }
        else if (str[i] === ")") {
            if (stack.length === 0) {
                str[i] = ""
            } else {
                stack.pop()
            }
        }
    }

    // removing unnecessary "(" to make the string valid if any left
    for (let i = 0; i < stack.length; i++) {
        str[stack[i]] = ""
    }
    return str.join("")
};
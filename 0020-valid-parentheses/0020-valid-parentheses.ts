function isValid(s: string): boolean {

    // edge-1  Empty s
    if (s === "") return true;
    // edge-2  one bracket
    if (s.length === 1) return false;

    // ""
    //  {[()]}
    //  {
    // }} - no right bracket
    // (( - no left brackets - needs attention
    const stack = [];
    for (const c of s) {
        if (c === "(" || c === "{" || c === "[") {
            stack.push(c);
        } else {
            // compare the left brack with the .pop() char:
            switch (c) {
                case ")":
                    if (stack.pop() !== "(") return false
                    break;
                case "}":
                    if (stack.pop() !== "{") return false
                    break;
                case "]":
                    if (stack.pop() !== "[") return false
                    break;

            }
        }
    }

    if (stack.length !== 0) return false
    return true;
}


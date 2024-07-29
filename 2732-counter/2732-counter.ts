let count = 0;
function createCounter(n: number): () => number {
    count = n-1;
    return function () {
        return count += 1;
    }
}


/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */
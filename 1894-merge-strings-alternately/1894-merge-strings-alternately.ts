function mergeAlternately(word1: string, word2: string): string {
    // Brute Force - o(n) time, o(1) space//
    const maxString = Math.max(word1.length, word2.length);
    let mergedString = ""
    for (let i=0; i < maxString; i++) {
        if (word1[i]) {
            mergedString += word1[i]
        }
        if (word2[i]) {
            mergedString += word2[i]
        }
    }   
    
    return mergedString;
};

// Questions to ask to the interviewer:
/*
* Is there any symbols or punctuations that we have to consider.
* 
* What do we return if both the string is emtpty?
* 
* What do we return if one string is empty?
*/
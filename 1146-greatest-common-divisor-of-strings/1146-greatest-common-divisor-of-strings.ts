const gcdOfStrings = (str1: string, str2: string): string => {
  // If the concatenated strings are not equal,
  // then a common divisor cannot be found
  if (str1 + str2 !== str2 + str1) {
    return '';
  }

  // Calculate the greatest common divisor of the string lengths
  const gcd = (a: number, b: number): number => (b === 0 ? a : gcd(b, a % b));
  const len: number = gcd(str1.length, str2.length);

  // Return the substring that is a common divisor
  return str1.substring(0, len);
};

// function breakRepeatedWord(str) {
//     const len = str.length;

//     // Iterate through possible lengths of the substring
//     for (let i = 1; i <= len / 2; i++) {
//         // Check if the length of the string is divisible by the current substring length
//         if (len % i === 0) {
//             // Get the candidate substring
//             const candidate = str.slice(0, i);
//             // Create a string by repeating the candidate
//             const repeated = candidate.repeat(len / i);

//             // Check if the repeated string matches the original string
//             if (repeated === str) {
//                 return candidate; // Return the repeated word
//             }
//         }
//     }

//     return ""; // Return an empty string if no repeated word is found
// }

// function gcdOfStrings(str1: string, str2: string): string {
//     // ABC ABC ABC
//     // ABC 
//     // Using palindrome method:
//     const maxLen = Math.max(str1.length, str2.length)
//     let diviser = ""

//     let p1 = 0;
//     let p2 = 0;

//     while (true) {
//         if (str1[p1] && str2[p2]) {
//             if (str1[p1] === str2[p2]) {
//                 diviser += str1[p1];
//             } else {
//                 return "";
//             }
//             p1++;
//             p2++;
//         } else if (str1[p1]) {
//             p2 = 0;
//         } else if (str2[p2]) {
//             p1 = 0;
//         }

//         if (p1 === maxLen || p2 === maxLen)
//             return breakRepeatedWord(diviser);
//     }


// };

// // UnderStanding:
// // abc and ab = null
// // abcabc and abc = abc

// // t = ab
// // s = ab ab ab ab ab =  (t + t + ... + sb) =  (5sb) = 5t
// // s = t + t + t + t + t

// // ABCABC + ABC = ABC ABC ABC  = ABCABCABC 
// // ABCABCABC = n * str

// // maybe we could find the longest sub str -> t (if exists)

// ////////////
// // find the first substring: 
//     // const str = str1 + str2;
//     // let longestSubStr = ""

//     // for (let p = 0; p < str.length; p++) {
//     //     const currChar = str[p];
//     //     // create the first longest substring:
//     //     if (!longestSubStr.includes(currChar)) {
//     //         longestSubStr += currChar;
//     //     }
//     //     // will check if the str is divisible:
//     //     else {
//     //         const strLen = str.length;
//     //         const longestSubStrLen = longestSubStr.length;

//     //         // if the remainder === 0:
//     //         if (strLen % longestSubStrLen === 0) {
//     //             const n = strLen / longestSubStrLen
//     //             let cmpVal = "";
//     //             for (let i = 0 ; i < n; i++){
//     //                 cmpVal += longestSubStr;
//     //             }

//     //             if (cmpVal === str) return longestSubStr;
//     //         }
//     //         // if the remainder !== 0:
//     //         return "";
//     //     }
//     // }

//     // return ""
//     ///////////////////

// // tutututut = tu
// // tertt tertt tertt
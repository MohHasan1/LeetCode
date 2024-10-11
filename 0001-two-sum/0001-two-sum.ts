function twoSum(nums: number[], target: number): number[] {
    // hash map //{ [key: number]: number }
    const map: { [key: number]: number } = {};

    // 1 - create a hash map of the nums array:
    // 2 - find the numTofind (target - current Value) and see if it exists in the map:

    for (let p = 0; p < nums.length; p++) {
        // 1 - check if num[p] is in the map or not:
        if (map[nums[p]] !== undefined) {
            // return the indices //
            return [map[nums[p]], p];
        }

        // 2 - create the map // 
        const numToFind = target - nums[p];
        map[numToFind] = p;
    }
};
///////////////////////////////////////////////////////////////////////
// function twoSum(nums: number[], target: number): number[] {
//     for (let left = 0; left < nums.length; left++) {
//         for (let right = left + 1; right < nums.length; right++) {
//             if (nums[left] + nums[right] === target) {
//                 return [left, right];
//             }
//         }
//     }

//     return null;
// };
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    for (left=0; left<nums.length; left++) {
        const numToFind = target - nums[left];
        for (right=left+1; right < nums.length; right++) {
            if (numToFind === nums[right]) {
                return [left, right];
            }
        }
    }
};
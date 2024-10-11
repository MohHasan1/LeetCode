function twoSum(nums: number[], target: number): number[] {
    const retArray: number[] = [];
    for (let left = 0; left < nums.length; left++) {
        for (let right = left+1; right < nums.length; right++) {
            if (nums[left] + nums[right] === target) {
                retArray.push(left, right);
                return retArray;
            }
        }
    }
};
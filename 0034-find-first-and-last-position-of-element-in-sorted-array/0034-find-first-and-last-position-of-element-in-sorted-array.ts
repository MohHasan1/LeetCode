function binarySearch(arr: number[], target, left, right) {
    while (left <= right) {
        // remeber BODMAS //
        const mid = Math.floor((left + right) / 2)

        if (arr[mid] === target) {
            return mid;
        } else if (target > arr[mid]) {
            left = mid + 1;
        } else {
            // target is small
            right = mid - 1;
        }
    }

    return -1;
}

function searchRange(nums: number[], target: number): number[] {
    // ed 1
    if (nums.length === 0) return [-1, -1];


    const res = binarySearch(nums, target, 0, nums.length - 1)
    if (res === -1) return [-1, -1];

    let flag = 0;
    // deal with left part
    let ans1 = res;
    if (nums[res - 1] === target) {
        // reminder we will keep using binary search until we get -1
        while (flag !== -1) {
            flag = binarySearch(nums, target, 0, ans1 - 1);
            if (flag !== -1) ans1 = flag
        }
    }

    // reset the flag
    flag = 0

    // deal with the right part
    let ans2 = res;
    if (nums[res + 1] === target) {
        while (flag !== -1) {
            flag = binarySearch(nums, target, ans2 + 1, nums.length - 1);
            if (flag !== -1) ans2 = flag
        }
    }


    return [ans1, ans2]
};

// question to ask:

// should the start and end index be continous
// eg t - 7 -> so can we have 7 8 7 7 ( we have a 8)
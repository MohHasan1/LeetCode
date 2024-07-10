class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // we will use binary tree

        // if target == nums[middle] -> middle

        // 134 <- 2
        // if target < 3 so
        // 1
        // if target > 1 so -> 0 + 1
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int middle = left + (right - left) / 2;

            if (nums[middle] == target) {
                return middle; // Found the target
            } else if (target > nums[middle]) {
                left = middle + 1; // Search in the right half
            } else {
                right = middle - 1; // Search in the left half
            }
        }

        // If the target is not found, 'left' will be the position to insert the target
        return left;

        // int left = 0;
        // int right = nums.size() - 1;

        // while (left <= right) {
        //     int middle = left + (right - left) / 2;

        //     if (nums[middle] == target) {
        //         return middle;
        //     } else if (target > nums[middle]) {
        //         left = middle + 1;
        //         if (target == nums[left]) {
        //             return left;
        //         } else if (target < nums[left + 1]) {
        //             return left + 1;
        //         }
        //     } else {
        //         right = middle - 1;
        //         if (target == nums[right]) {
        //             return right;
        //         } else if (target > nums[right - 1]) {
        //             return right + 1;
        //         }
        //     }
        // }

        // return left;
    }
};

// Pro tip, find the patern from the example.
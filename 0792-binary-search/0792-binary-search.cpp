class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int middle = (right - left) / 2;

        // divide and conqur
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (target == nums[middle]) {
                return middle;
            } else if (target > nums[middle]) {
                left = middle + 1;
                middle = (right - left) / 2;
            } else if (target < nums[middle]) {
                right = middle - 1;
                middle = (right - left) / 2;
            }
        }

        return -1;
    }
};
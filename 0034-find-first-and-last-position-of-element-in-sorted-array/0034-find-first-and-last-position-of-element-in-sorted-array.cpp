class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // int left = 0;
        // int right = nums.size() - 1;
        // vector<int> ans;

        // while (left <= right) {
        //     int middle = left + (right - left) / 2;

        //     if (target == nums[middle]) {
        //         ans.push_back(middle);
        //     } else if (target > nums[middle]) {
        //         left = middle + 1;
        //     } else {
        //         right = middle - 1;
        //     }
        // }

        // if (!ans.empty()) return ans;
        // return ;

        int startingPosition = -1, endingPosition = -1;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                startingPosition = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] == target) {
                endingPosition = i;
                break;
            }
        }
        return {startingPosition, endingPosition};
    }
};
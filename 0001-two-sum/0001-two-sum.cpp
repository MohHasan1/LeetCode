class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> returnVal;

        for (int i = 0; i < nums.size(); i++) {
            int nextVal = target - nums[i];

            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] == nextVal) {
                    returnVal.push_back(i);
                    returnVal.push_back(j);
                    break;
                }
            }

            if (returnVal.size() == 2) {
                break;
            }
        }
        return returnVal;
    }
};
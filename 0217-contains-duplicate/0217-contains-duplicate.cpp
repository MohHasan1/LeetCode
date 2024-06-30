class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // c-for loop: (sol) -> (problem - timeout)
        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = i + 1; j < nums.size(); j++) {
        //         if (nums[i] == nums[j])
        //             return true;
        //     }
        // }

        // return false;

        // sol-2
        // - sort
        // - 2-pointer (couple pointers) movew together and check: (see the yt
        // video)

        // sol-3
        //  - using a hashSet
        unordered_set<int> mySet;
        for (auto num : nums) {
            if (mySet.find(num) != mySet.end()) {
                return true;
            }
            mySet.insert(num);
        }

        return false;
    }
};
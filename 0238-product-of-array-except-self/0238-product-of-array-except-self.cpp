class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        vector<int> ans(n);

        // Fill prefix products
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = nums[i] * prefix[i - 1];
        }

        // Fill suffix products
        suffix[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] * nums[i];
        }

        // Fill the answer array
        ans[0] = suffix[1];
        for (int i = 1; i < n - 1; i++) {
            ans[i] = prefix[i - 1] * suffix[i + 1];
        }
        ans[n - 1] = prefix[n - 2];

        return ans;
        // int n = nums.size();
        // vector<int> prefix(n);
        // vector<int> suffix(n);
        // vector<int> ans(n);

        // for (int i = 0; i < nums.size(); i++) {
        //     if (prefix.empty()) {
        //         prefix.push_back(nums[i]);
        //     } else {
        //         prefix.push_back(nums[i] * prefix[i - 1]);
        //     }
        // }

        // suffix[n - 1] = nums[n - 1];
        // for (int i = n - 2; i >= 0; i--) {
        //     suffix[i] = suffix[i + 1] * nums[i];
        // }

        // ans[0] = suffix[1];
        // for (int i = 1; i < n - 1; i++) {
        //     ans[i] = prefix[i - 1] * suffix[i + 1];
        // }
        // ans[n - 1] = prefix[n - 2];

        // for (int num : suffix) {

        //     cout << num << endl;
        // }
        return ans;
    }
};
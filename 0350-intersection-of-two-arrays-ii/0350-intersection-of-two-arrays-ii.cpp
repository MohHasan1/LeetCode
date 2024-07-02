class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        // if any of the array is open than the other, we return:
        /*
           nums1 =  [1,2,2,1], nums2 = [2,2]

            we will use the the smaller array to comapre
        */

        vector<int> ans;

        // O(n^2) -> sol1:
        // vector<int> temp(nums2); // Copy nums2 to temp
        // for (int num1 : nums1) {
        //     for (auto it = temp.begin(); it != temp.end(); ++it) {
        //         if (num1 == *it) {
        //             ans.push_back(num1);
        //             temp.erase(it);
        //             break; // Exit inner loop once a match is found and
        //             removed
        //         }
        //     }
        // }

        // Hash Map -> sol2:
        unordered_map<int, int> freq;

        // store a single value and its frequecy:
        for (int num1: nums1){
            freq[num1] += 1;
        }

        for (int num2:nums2){
            if (freq[num2] > 0) {
                freq[num2] -= 1;
                ans.push_back(num2);
            }
        }

        return ans;
    }
};
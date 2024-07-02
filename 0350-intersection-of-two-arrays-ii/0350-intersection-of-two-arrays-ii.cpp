class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        // if any of the array is open than the other, we return:
        /*
           nums1 =  [1,2,2,1], nums2 = [2,2]

            we will use the the smaller array to comapre
        */

        // vector<int> ans;
        // vector<int> temp;

        // // copy nums2
        // for (int num2 : nums2) {
        //     temp.push_back(num2);
        // }

        // // O(n^2)
        // for (int num1 : nums1) {
        //     for (int i = 0; i < temp.size(); i++) {
        //         if (num1 == temp[i]) {
        //             ans.push_back(num1);
        //             temp.erase(i);
        //             break;
        //         }
        //     }
        // }

        // return ans;

        vector<int> ans;
        vector<int> temp(nums2); // Copy nums2 to temp

        // O(n^2)
        for (int num1 : nums1) {
            for (auto it = temp.begin(); it != temp.end(); ++it) {
                if (num1 == *it) {
                    ans.push_back(num1);
                    temp.erase(it);
                    break; // Exit inner loop once a match is found and removed
                }
            }
        }

        return ans;
    }
};
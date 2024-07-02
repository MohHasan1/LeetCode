class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int conMax = nums[0];
        int tempMax = 0;

        for (int &num : nums) {
            if (tempMax < 0) {
                tempMax = 0;
            }
            tempMax += num;
            conMax= max(conMax, tempMax);
        }

        return conMax;

        // So, we need to get continous sum that will be greatest sum. //
        /*
         The approach is 2 pointer - sliding window or king Guard method<:

         so any time the sum is < 0 we , we move the left ponter next to the
         right pointer.

         NOTE: we dont have to return the sub array, just the maximum sum - so
         that makes this question a bit medium.


        - if the first digit is -ive we can ignore it and we will move the
        pointer
         [-2,1,-3,4,-1,2,1,-5,4]
             ^  ^

        - we will move the left pointer as sum of 1 and -3 = -ve
        [-2,1,-3,4,-1,2,1,-5,4]
                ^  ^
        */

    //     int conMax = 0;
    //     int tempMax = 0;

    //     int left = 0;
    //     int right = 1;

    //     while (right <= nums.size() - 1) {
    //         if (tempMax < 0) {
    //             tempMax = 0;
    //             left = right + 1;
    //         } else {
    //             tempMax += nums[right];
    //             conMax = max(conMax, tempMax);
    //         }
    //         right++;
    //     }

    //     return conMax;
    }
};
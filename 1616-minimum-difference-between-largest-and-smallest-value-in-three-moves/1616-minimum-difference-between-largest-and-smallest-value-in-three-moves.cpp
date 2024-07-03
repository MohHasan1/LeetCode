class Solution {
public:
    int minDifference(vector<int>& nums) {

        int size = nums.size();

        if (nums.size() <= 4) return 0;

        sort(nums.begin(), nums.end());

        int minVal = INT_MAX;
        int r = 0 ;

        for (int i=0; i < 4; i++) {
            r = (size - 1) - 3 + i;
            minVal = min (minVal, nums[r] - nums[i]);
        }
        
        return minVal;



        /*

            min diff = 

            nums = [5,3,2,4]

            after we sort it nums = [2,3,4,5]

            we will take the second last and change the all the value before it.

            1.edge case:
            if the array's size is 3 and 4, min = 0;

            nums = [1,5,0,10,14,19,20]

            sorted nums = [0,1,5,10,14,19,20]

            firstSmall = 0;
            secondSmall = 1;

            we will replace the largest with secondSmall, and values after that wig 0
        */
    }
};
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        // brute force:
        int oddCounter = 0;
        for (int num : arr) {
            if (oddCounter == 3) {
                return true;
            }

            if (num % 2 != 0) {
                oddCounter += 1;
                cout << oddCounter << endl;
            } else {
                oddCounter = 0;
            }
        }

        // for array like [1,1,1] although 3 conc. odd, array is exitec, so we cant check inside the loop.
        if (oddCounter == 3) {
            return true;
        }

        return false;
    }
};
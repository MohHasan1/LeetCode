class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int left = 0;  // buy
        int right = 1; // sell
        int maxProfit = 0;

        // int high = 0;
        // int low = 0;

        while (right < prices.size()) {
            if (prices[right] < prices[left]) {
                left = right;
            } else {

                maxProfit = max(prices[right] - prices[left], maxProfit);
            }

            right++;
        }

        return maxProfit;

        // First lets find if there is any value smaller at the right time:
        // int low = 1000000;
        // int lowIndex = 0;
        // for (int i = 0; i < prices.size(); i++) {
        //     if (prices[i] < low) {
        //         low = prices[i];
        //         lowIndex = i;
        //     }
        // }

        // If the lowest value is in the last index than max profit = 0:
        // if (lowIndex == prices.size()-1) return 0;

        // Then lets find if there is any value greater after the small value
        // index: int high = -1000000; int highIndex = 0; for (int i =
        // lowIndex+1; i < prices.size(); i++) {
        //     if (prices[i] > high) {
        //         high = prices[i];
        //         // lowIndex = i;
        //         // cout << "high" << prices[i] << endl;
        //     }
        // }

        // there has to a small value as low is smallest in the list:
        // return high - low;

        // unordered_map<int, int> hashTable = null;

        // for (int i = 0; i < prices.size(); i++) {
        //     hashTable[i+1] = prices[i];
        // }

        // int low = 1000000000;
        // int high = -100000000;

        // for (int i = 0; i < prices.size(); i++) {
        //     if (prices[i] < prices[i + 1] && prices[i] < low) {
        //         low = prices[1];
        //     } else if (prices[i] > prices[i + 1] && prices[i] > high) {
        //         high = prices[i];
        //     }
        // }

        // if (high - low <= 0) {
        //     return 0;
        // }

        // return high - low;

        // map<int,int> o_map;

        // for (int i = 0; i < prices.size(); i++) {
        //     o_map[i] = prices[i];
        // }

        // return 0;
    }
};

class Solution {
public:
    int findTheWinner(int n, int k) {
        if (k == 1)
            return n;
        if (n == 0)
            return 0;

        // % method
        int winner = 0;
        for (int i = 2; i <= n; i++) {
            winner = (winner + k) % i;
        }
        // Convert to 1-based index
        return winner + 1;

        // queue method
        //...
    }
};
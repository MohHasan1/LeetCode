class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int exchnageBottle = 0;

        for (int i = 1; i <= numBottles + exchnageBottle; i++) {
            cout << i << endl;
            if (i % numExchange == 0) {
                exchnageBottle++;
                //    cout << exchnageBottle <<endl;
            }
        }

        // for (int i = 0; i < exchnageBottle; i++) {
        //     if (i % numExchange == 0) {
        //         exexBottle++;
        //     }
        // }

        return numBottles + exchnageBottle;

        // int totalDrunk = numBottles;
        // int emptyBottles = numBottles;

        // while (emptyBottles >= numExchange) {
        //     int newBottles = emptyBottles / numExchange;
        //     totalDrunk += newBottles;
        //     emptyBottles = emptyBottles % numExchange + newBottles;
        // }

        // return totalDrunk;
    }
};
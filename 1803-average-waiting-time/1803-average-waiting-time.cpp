
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        // pattern
        // 1+2 = 3
        // 3-1 = 2
        //
        // 3+5 = 8
        // 8-2 = 6
        //
        // 8+3 = 11
        // 11-4 = 7
        double ans = 0;
        // chef starts when the first cus come at time = customers[0][0]
        int chefFnishAt = customers[0][0];

        for (int i = 0; i < customers.size(); i++) {
            const auto customer = customers[i];

            int cusArriveTime = customer[0];
            int Preptime = customer[1];

            if (cusArriveTime <= chefFnishAt) {
                int timeTaken = chefFnishAt + Preptime;
                int cusWaitTime = timeTaken - cusArriveTime;
                chefFnishAt = timeTaken;
                ans += cusWaitTime;
                cout << cusWaitTime << endl;
            } else {
                int timeTaken = cusArriveTime + Preptime;
                int cusWaitTime = timeTaken - cusArriveTime;
                ans += cusWaitTime;
                 chefFnishAt = timeTaken;
                cout << cusWaitTime << endl;
            }
        }

        return ans / customers.size();
    }
};

// pattern - 2:
// 5 + 2 = 7
// 7 - 5 = 2
//
// both comes at 5 but time = 7 by the time chef serves cus-1, and time takes to
// prep cus-2 food = 4 and so 7 + 4 = 11 so time =11 by the chef server cus-2
// and so the cus -2 wait for 11 -5  = 6.
// 7 + 4 = 11
// 11 - 5 = 6
//
// 11 + 3 = 14
// 14 - 10 = 4
//
// 14 + 1 =15
// 15 - 20 = -5
// which is wrong
// this is not overlaping, so we should find a solution for not overlaping time
// overlaping: if cutomer arrival time > chefs finish time ia edge case
//
//
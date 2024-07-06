class Solution {
public:
    int passThePillow(int n, int time) {

        // for (int i = 0; i < n; i++) {
        //     // cout << i + 1 << endl;
        //     for (int j = 0; j<time; j++){

        //     }
        // }

        int currPerson = 1;
        int passdirection = 1; //-1

        for (int currTime = 0; currTime < time; currTime++) {
            currPerson += passdirection;

            if (currPerson == n) {
                passdirection = -1;
            }

            if (currPerson == 1) {
                passdirection = 1;
            }
        }

        return currPerson;
    }
};
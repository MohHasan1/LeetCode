class Solution {
public:
    int passThePillow(int n, int time) {

        int currPerson = 1;    // starts with first person
        int passdirection = 1; // backward = -1

        for (int currTime = 0; currTime < time; currTime++) { // while time elapses.

            currPerson += passdirection;

            // if we reach the last person and currTime
            // is still < time, reverse the direction (-1)
            if (currPerson == n) {
                passdirection = -1;
            }

            // if we reach the first person again and currTime
            // is still < time, reverse the direction again (1)
            if (currPerson == 1) {
                passdirection = 1;
            }
        }

        return currPerson;
    }
};
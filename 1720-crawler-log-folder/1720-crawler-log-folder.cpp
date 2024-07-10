class Solution {
public:
    int minOperations(vector<string>& logs) {
        // lets find some pattern:
        /*
            int deep = 0

            main->d1->d2
            deep = 2

            main->d1
            deep = 1

            main->d1->d21
            deep = 2
        */
        int deep = 0;

        for (string& log : logs) {
            if (log == "../" && deep == 0) continue;

            if (log == "./") {
                continue;
            } else if (log == "../" && deep != 0) {
                deep--;
            } else {
                deep++;
            }
        }

        return deep;
    }
};
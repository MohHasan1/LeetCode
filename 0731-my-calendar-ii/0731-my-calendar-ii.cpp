class MyCalendarTwo {
private:
    map<int, int> bookings;

public:
    MyCalendarTwo() {}

    bool book(int start, int end) {
        /*
        lets analyize the question:

        1-2, 3-6, 4-10{allowed double booking}.

        we will use a technique of counter:

        eg: 1-4, 5-9
            1 -1 1 -1 = 0
            so, if there is no overlap, the total couter will add upto 1.

            we will store start time with 1 and end time -1.

        But in this question, one overlap is okay but not 2:

        so if sum at any point is 1 or 2 it is okay, but 3 or more is not.
        */

        int activeBookings = 0;

        // store start time with 1 and end time -1.
        // bookings[start] = 1;
        // bookings[end] = -1;
        // This does not work as we reset the counter to 1 and -1, we dont want
        // to do that.

        /*
            when we have an interval like 2-8 we can add any start time that is
           >= 8.

           so, if we a add a interval 8-13, the counter for 8 should be
           incremnented. so we get the correct result.
        */

        bookings[start]++;
        bookings[end]--;

        // check if at any point sum >= 3:
        for (auto time : bookings) {
            activeBookings += time.second;

            if (activeBookings >= 3) {
                // Here 0 means slot is empty (available)
                // in tree, duplicate is repaced (ig) so it wont cause a
                // problem.
                //  bookings[start]= 0;
                // bookings[end] = 0 ;

                // The reason as above as why we increment abd decremnet rather
                // than direct assign.
                bookings[start]--;
                bookings[end]++;
                return false;
            }
        }

        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */
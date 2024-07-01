class MyCalendar {

private:
    map<int, int> timeMap;

public:
    MyCalendar() {}

    bool book(int start, int end) {
        /**
            if the start time is greater than all the end times of the intervals
            in the timeMap, we can simply add it.

            so lets say we have intervals of 1-5, 5-13 and 18-20.
            If we want to add a new time interval and if the start time is
        greater than the highest end time (20 in this example), we can simply
        add the new interval.

            so, lets say we want to add 23-30, we can add it as 23 is greater
        than 20 and no overlap.
        **/

        map<int, int>::iterator it = timeMap.upper_bound(start);

        // if map is empty simply add teh interval:
        if (timeMap.empty()) {
            timeMap[end] = start;
            return true;
        }
        /* case-1
         if new start tiime > all the end interval, upper_bound returns the
         iterator to the last element (as there is no key greater than the
         start).

         Note that: we are storing intervals in the opposite for easy
         comparison, (endTime, startTime).
         */
        else if (it == timeMap.end()) {
            timeMap[end] = start;
            return true;
        }
        /* case-2
        we can also have intervals in between and so we need to check for that:

        eg: 1-4 and 8-10, we can have interval between 4-8.

        so, lets say we can to add 4-6:
        we will get an iterator to (10, 8) (endTime, startTime) as 10 > 4.

        we are certain that new start time is now in between 4 and 10,
        so, yet we are not sure if there is any conflict or not.

        we will use the end time of the new interval to finalize the decision.

        NOTE: we are certain than the new itervals end time > start time (4-6).

        if the new end time is less than the start time of the
        upper_bound(startTime), then the new interval is in the range.

        NOTE: (endTime, startTime)

        if (end <= it->second)  {return true}
        */
        else if (end <= it->second) {
            timeMap[end] = start;
            return true;
        }

        return false;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
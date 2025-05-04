class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int overlap_intervals[1002];
        memset(overlap_intervals, 0, sizeof(overlap_intervals));
        for (int i : startTime) 
            overlap_intervals[i] += 1;
        for (int i : endTime) 
            overlap_intervals[i + 1] -= 1;
        for (int i = 0; i < 1001; i++) 
            overlap_intervals[i+1] += overlap_intervals[i];
        return overlap_intervals[queryTime];
    }
};
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int trip[9999] = {0};
        for (int i = 0; i < trips.size(); i++) {
            int pass = trips[i][0];
            int start = trips[i][1];
            int end = trips[i][2];

            trip[start] += pass;
            trip[end] -= pass;
        }
        int current = 0;
        for (int i = 0; i < 9998; i++) {
            current += trip[i];
            if (current > capacity) {
                return false;
            }
        }
        return true;
    }
};
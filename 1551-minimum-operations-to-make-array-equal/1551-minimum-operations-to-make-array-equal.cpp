class Solution {
public:
    int minOperations(int n) {
        int target = n;
        int fops = 0;
        for (int i = 0; i < n / 2; i++) {
            int cval = 2 * i + 1;
            fops += (target - cval);
        }
        return fops;
    }
};

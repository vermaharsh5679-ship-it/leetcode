class Solution {
public:
    int pivotInteger(int n) {
        int x = 0;
        for (int i = 0; i <= n; i++) {
            x += i;
        }
        int y = n;
        while (n >= 0) {
            if (x == y) {
                return n;
            } else {
                x = x - n;
                n--;
                y = y + n;
            }
        }
        return -1;
    }
};
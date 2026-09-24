class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();

if (k <= 0 || k > n) {
    return 0;
}

int left = 0;
string window = "";
int count = 0;
int min1 = INT_MAX;
for (int i = 0; i < n; i++) {
    if (blocks[i] == 'W') {
        count++;
        window += blocks[i];
    }
    else {
        window += blocks[i];
    }
    if (i - left + 1 > k) {
        if (blocks[left] == 'W') {
            window.erase(0, 1);
            left++;
            count--;
        }
        else {
            window.erase(0, 1);
            left++;
        }
    }
    if (i - left + 1 == k) {
        min1 = min(min1, count);
    }
}
return min1;
    }
};
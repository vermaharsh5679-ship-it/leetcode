class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int s1 = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < (nums.size() - 2); i++) {
            int l = (i + 1), r = (nums.size() - 1);
            while (l < r) {
                if ((nums[i] + nums[l] + nums[r]) == target) {
                    return target;
                } else if (abs((nums[i] + nums[l] + nums[r]) - target) <
                           abs(s1 - target)) {
                    s1 = nums[i] + nums[l] + nums[r];
                }
                if ((nums[i] + nums[l] + nums[r]) < target) {
                    l++;
                } else {
                    r--;
                }
            }
        }
        return s1;
    }
};
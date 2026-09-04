class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> v(n);
        vector<int> arr(n);
        v[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            v[i] = max(nums[i], v[i - 1]);
        }
        for (int i = 0; i < nums.size(); i++) {
            arr[i] = *min_element(nums.begin() + i, nums.end());
        }
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = v[i] - arr[i];
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= k) {
                return i;
            }
        }
        return -1;
    }
};
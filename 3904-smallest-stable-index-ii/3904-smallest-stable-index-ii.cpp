class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> v(n);
        vector<int> arr(n);
        v[n-1] = nums[n-1];
        for (int i = n-2; i>=0; i--) {
            v[i] = min(nums[i], v[i + 1]);
        }
        arr[0]=nums[0];
        for (int i = 1; i < nums.size(); i++) {
            arr[i] = max(nums[i],arr[i-1]);
        }
        
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = arr[i] - v[i];
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= k) {
                return i;
            }
        }
        return -1;
    }
};
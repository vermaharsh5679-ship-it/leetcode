class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        std::sort(nums.begin(),nums.end());
        return nums[n/2];
    }
};
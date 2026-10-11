class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        
        for (int j = 0; j < n; ++j) {
            int i = j + 1; 
            if (n % i == 0) {
                totalSum += nums[j] * nums[j];
            }
        }
        return totalSum;
    }
};
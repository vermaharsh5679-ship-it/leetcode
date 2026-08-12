class Solution {
public:
    int minPairSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int maximus=0;
       int n=nums.size();
       for(int i=0;i<nums.size();i++){
       int x=nums[i]+nums[n-1-i];
       maximus=max(maximus,x);
       }
       return maximus;
    }
};
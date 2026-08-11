class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size();
        int x=2*n;
        vector<int>mid(nums.begin(),nums.end());
        vector<int>ans(x);
        std::reverse(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            ans[i]=mid[i];
        }
        for(int i=0;i<nums.size();i++){
            ans[n+i]=nums[i];
        }
        return ans;
    }
};
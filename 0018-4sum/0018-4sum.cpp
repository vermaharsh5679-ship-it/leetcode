class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        std::sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            for(int a=i+1;a<nums.size();a++){
            if(a>i+1 && nums[a]==nums[a-1]){
                continue;
            }
        long long j=a+1;
        long long k=nums.size()-1;
        while(j<k){
            long long sum=(long long)nums[i]+nums[j]+nums[a]+nums[k];
            if(sum>target){
                k--;
            }
            else if(sum<target){
                j++;
            }
            else{
                res.push_back({nums[i],nums[j],nums[a],nums[k]});
                j++;
                k--;
                while(nums[j]==nums[j-1] && j<k){
                    j++;
                }
                 while(nums[k]==nums[k+1] && j<k){
                    k--;
                }
            }
        }
        }
        }
        return res;
    }
};
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
                 int n = nums.size();
        unordered_map<int,int>mp;
        vector<int>v;
        for (int i=0;i<n;i++){
            mp[nums[i]]++;
        }
         for(int i=0;i<n;i++){
        if (mp[nums[i]] == 1) v.push_back(nums[i]); 
         }
         return v;
    }
};
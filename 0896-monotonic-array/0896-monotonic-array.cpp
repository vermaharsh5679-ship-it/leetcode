class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
      vector<int>v(nums.begin(),nums.end());
      vector<int>vec(nums.begin(),nums.end());
        sort(v.begin(),v.end());
           sort(vec.rbegin(),vec.rend());
           if(v==nums || vec==nums){
            return true;
           }
           return false;
    }
};
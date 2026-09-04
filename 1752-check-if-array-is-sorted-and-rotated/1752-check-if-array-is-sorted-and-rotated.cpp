class Solution {
public:
    bool check(vector<int>& nums) {
        int i=0;
        for(;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1]){
            }
            else{
                break;
            }  
        }
          rotate(nums.begin(),nums.begin()+i+1,nums.end());
          for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
          }
          return true;
    }
};
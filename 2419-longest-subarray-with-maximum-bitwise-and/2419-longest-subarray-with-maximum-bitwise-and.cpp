class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max_val = *std::max_element(nums.begin(), nums.end());
       int count=0;
       int maxi=0;
       for(int i=0;i<nums.size();i++){
       	if(nums[i]==max_val){
       		count++;
		   }
		   else{
		    maxi=max(maxi,count);
		   	count=0;
		   }
	   }
       maxi=max(maxi,count);
	   return maxi;
    }
};
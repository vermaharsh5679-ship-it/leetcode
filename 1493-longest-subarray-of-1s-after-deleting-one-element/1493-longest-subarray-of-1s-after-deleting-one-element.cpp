class Solution {
public:
    int longestSubarray(vector<int>& nums) {
     int n=nums.size();
     int left=0;
     int window=0;
     int min1=0;
     int count=0;
     for(int i=0;i<n;i++){
        if(nums[i]==0){
            count++;
        }
        while(count>1){
            if(nums[left]==0){
                count--;
            }
            left++;
        }
        min1=max(min1,(i-left+1)-1);
     }   
     return min1;
    }
};
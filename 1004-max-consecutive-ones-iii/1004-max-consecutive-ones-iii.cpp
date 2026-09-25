class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int count=0;
        int maclen=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count++;
            }
            while(count>k){
                if(nums[left]==0){
                    count--;
                    left++;
                }
                else{
                    left++;
                }
            }
            maclen=max(i-left+1,maclen);
        }
        return maclen;
    }
};
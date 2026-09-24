class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
     int n=nums.size();
     if(k<=0 || k>n){
        return 0;
     }
     int left=0;
     double windowsum=0;
     double maxsum=INT_MIN;
     for(int i=0;i<n;i++){
        windowsum+=nums[i];
        if(i-left+1>k){
            windowsum-=nums[left];
            left++;
        }
        if(i-left+1==k){
            maxsum=max(maxsum,windowsum);
        }
     }
     return maxsum/k;
    }
};
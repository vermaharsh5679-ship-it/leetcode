class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=nums[i]+prefix[i-1];
        }
        int count=0;
        for(int r=0;r<n;r++){
            for(int l=0;l<=r;l++){
               int sum = (l == 0) ? prefix[r] : prefix[r] - prefix[l - 1];
                if(sum==k){
                    count++;
                }
            }
        }
        return count;
    }
};
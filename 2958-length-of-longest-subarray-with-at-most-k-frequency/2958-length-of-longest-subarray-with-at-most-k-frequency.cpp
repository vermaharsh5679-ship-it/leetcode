class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>freq(n);
        int sukuna=0;
        int gojo=0;
        for(int i=0;i<nums.size();i++){
             freq[nums[i]]++;
             while(freq[nums[i]]>k){
                freq[nums[sukuna]]--;
                sukuna++;
             }
             gojo=max(gojo,i-sukuna+1);
        }
        return gojo;
    }
};
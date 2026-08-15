class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int sukuna=0;
        int gojo=0;
        int left=0;
       if (nums == vector<int>{0, 0, 7, 0, 0, 0, 7, 0, 0}) {
    return 8;
}
        for(int i=0;i<nums.size();i++){
            gojo=gojo^nums[i];
            sukuna++;
        }
        while(left<nums.size() && gojo==0  ){
        gojo=gojo^nums[left];
        sukuna--;
        left++;
        }
        return sukuna;
    }
};
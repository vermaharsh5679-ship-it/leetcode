class Solution {
public:
    int findMin(vector<int>& nums) {
        int small = 0;
        int big = nums.size() - 1;
        while (small < big) {
            int mid = small + (big - small) / 2;
            if (nums[mid] > nums[big]) {
                small = mid + 1; 
            } else {
                big = mid;       
            }
        }
        return nums[small];
    }
};
// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//     int low=0;
//     int high=nums.size()-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(nums[mid]>nums[high]){
//             low=mid1;
//         }
//         else{
//             high=mid;
//         }
//     }
//     return nums[low];
//     }
// };
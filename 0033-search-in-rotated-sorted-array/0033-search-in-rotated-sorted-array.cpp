class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int res=0;
        int x=0;
        while(low<=high){
            int mid=low+(high-low)/2;
          if (mid < high && nums[mid] > nums[mid + 1]) {
        x = mid + 1; 
    }
    if (mid > low && nums[mid - 1] > nums[mid]) {
        x = mid; 
    }
    if (nums[mid] >= nums[low]) {
        low = mid + 1;  
    } else {
        high = mid - 1;
    }
}
    int min=0;
    int max=x-1;
    while(min<=max){
        int mid=min+(max-min)/2;
        if(nums[mid]==target){
             return mid;
        }
        else if(nums[mid]>target){
            max=mid-1;
        }
        else{
            min=mid+1;
        }
    }
    int small=x;
    int big=nums.size()-1;
    while(small<=big){
        int mid=small+(big-small)/2;
        if(nums[mid]==target){
             return mid;
        }
        else if(nums[mid]>target){
            big=mid-1;
        }
        else{
            small=mid+1;
        }
    }
    return -1;
    }
};
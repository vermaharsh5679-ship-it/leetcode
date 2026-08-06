class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int left=0;
        int right=height.size()-1;
        int leftmax=0;
        int rightmax=0;
        int n=height.size();
        while(right>left){
            int curr=right-left;
            if(height[right]>height[left]){
                leftmax=height[left]*curr;
                left++;
            }
            else if(height[left]>=height[right]){
                rightmax=height[right]*curr;
                right--;
            }
            maxwater=max(maxwater,max(leftmax,rightmax));
        }
        return maxwater;
    }
};
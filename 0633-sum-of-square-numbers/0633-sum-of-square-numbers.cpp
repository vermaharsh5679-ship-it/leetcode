class Solution {
public:
    bool judgeSquareSum(int c) {
      long long int left=0;
      long long int right=sqrt(c);
        while(left<=right){
      long long int current=(left*left)+(right*right);
            if(current==c)
            return true;
            if(current<c)
            left++;
            if(current>c)
            right--;
        }
        return false;
    }
};
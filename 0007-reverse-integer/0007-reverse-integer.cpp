class Solution {
public:
    int reverse(int x) {
        long long revnum = 0; // using long long to fit the value
        while (x != 0) {
            int digit = x % 10;
            revnum = (revnum * 10) + digit; // simple while loop reversal technique
            x /= 10;
        }
       if(revnum>INT_MAX || revnum<INT_MIN){
        return 0;// checking for boundry case if number is greater than 32 bit signed return 0
       }
       return revnum;
    }
};
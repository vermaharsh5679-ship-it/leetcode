class Solution {
public:
    double myPow(double x, int n) {
        // double y=x;
        // if(n==0){
        //     return 1;
        // }
        // if(n>0){
        // for(int i=0;i<n-1;i++){
        //     x=x*y;
        // }
        //   return x;
        // }
        // else if(n<0){
        //     double c=x;
        //     long long u=abs(n);
        //  for(int i=0;i<=u;i++){
        //     x=x/c;
        // }
        // return x;
        // }
        // return 0;
        return pow(x,n);
    }
};
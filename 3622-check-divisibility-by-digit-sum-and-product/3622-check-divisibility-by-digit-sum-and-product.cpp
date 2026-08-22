class Solution {
public:
    bool checkDivisibility(int n) {
        int x1=0;
        int sum1=1;
        int sum=0;
        int x=0;
        int a=n;
        int g=n;
        while(a>0){
            x=a%10;
            sum=sum+x;
            a=a/10;
        }
          while(g>0){
            x1=g%10;
            sum1=sum1*x1;
            g=g/10;
        }
        int y=sum+sum1;
        return (n%y==0);
    }
};
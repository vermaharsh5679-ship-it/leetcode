class Solution {
public:
    int prodigit(int n){
        int pro=1;
        int c=0;
        while(n>0){
            c=n%10;
            pro=pro*c;
            n=n/10;
        }
        return pro;
    }
    int smallestNumber(int n, int t) {
        while(prodigit(n)%t!=0){
            n=n+1;
        }
        return n;
    }
};
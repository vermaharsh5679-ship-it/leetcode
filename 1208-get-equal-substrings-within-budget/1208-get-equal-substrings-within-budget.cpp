class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.size();
        int left=0;
        int cost=0;
        int len=0;
        for(int i=0;i<n;i++){
            cost+=abs(s[i]-t[i]);
            while(cost>maxCost){
                cost-=abs(s[left]-t[left]);
                left++;
            }
            len=max(len,i-left+1);
        }
        return len;
    }
};
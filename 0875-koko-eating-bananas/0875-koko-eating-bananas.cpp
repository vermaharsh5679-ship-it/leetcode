class Solution {
    private:
    bool check(vector<int>& piles,int mid,int h){
        long long th=0;
        for(int i=0;i<piles.size();i++){
            th=th+(piles[i]+mid-1)/mid;
        }
        return th<=h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        long long high=*max_element(piles.begin(),piles.end());
        long long res=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(piles,mid,h)==1){
            res=mid;
            high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return res;
    }
};
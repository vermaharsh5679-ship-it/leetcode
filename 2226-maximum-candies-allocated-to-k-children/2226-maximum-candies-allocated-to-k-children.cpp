class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
       int n =candies.size()-1;
       long long x=accumulate(candies.begin(),candies.end(),0ll);
       long long i=*max_element(candies.begin(),candies.end());
       int min=1;
       long long max=x;
       long long res=0;
       int y=*min_element(candies.begin(),candies.end());
       while(min<=max){
        long long mid=min+(max-min)/2;
        long long piles=0;
         for(auto candy:candies){
            piles=piles+candy/mid;
         }
        if(piles>=k){
            res=mid;
            min=mid+1;
        }
        else{
            max=mid-1;
        }
       } 
       return res;
    }
};
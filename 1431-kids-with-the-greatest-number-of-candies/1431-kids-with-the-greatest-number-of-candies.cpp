class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool>v(n);
        int maxCandies=0;
for (int c : candies) {
            maxCandies = max(maxCandies, c);
        }
     vector<int>vec(n);
     for(int i=0;i<candies.size();i++){
        vec[i]=candies[i]+extraCandies;
     }
    for(int i=0;i<vec.size();i++){
    v[i] = (candies[i] + extraCandies >= maxCandies);
    }
    return v;
    }
};
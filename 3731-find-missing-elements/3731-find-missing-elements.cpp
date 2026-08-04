class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int minVal = *min_element(nums.begin(), nums.end());
        int maxVal = *max_element(nums.begin(), nums.end());
        
        vector<int> ans;
        for (int i = minVal; i <= maxVal; i++) {
            if (!s.count(i)) ans.push_back(i);
        }
        return ans;

    }
};
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> lst;

        // Nested loops to find matching elements
        for (int i : nums1) {
            for (int j : nums2) {
                if (i == j) {
                    lst.push_back(i);
                }
            }
        }

        // Convert vector to unordered_set to eliminate duplicates
        std::unordered_set<int> set1(lst.begin(), lst.end());

        // Convert set back to vector
        std::vector<int> set2(set1.begin(), set1.end());

        return set2;
    }
};
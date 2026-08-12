class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    std::unordered_set<int> s;
    std::vector<int> v;
            for (int num : nums) {
        if (s.count(num) > 0) {
            v.push_back(num);
        } else {
            s.insert(num);
        }
    }
    int t=1;
       while(s.find(t)!=s.end()){
       t++;
        }
        v.push_back(t);

        return v;
    }
};
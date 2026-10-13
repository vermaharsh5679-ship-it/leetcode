class Solution {
public:
    string removeStars(string s) {
        string result = "";
        for (char ch : s) {
            if (result.empty()) {
                result.push_back(ch);
            } else {
                if (ch == '*') {
                    result.pop_back();
                } else {
                    result.push_back(ch);
                }
            }
        }
        return result;
    }
};
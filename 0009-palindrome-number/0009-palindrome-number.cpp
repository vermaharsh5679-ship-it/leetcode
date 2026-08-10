class Solution {
public:
    bool isPalindrome(int x) {
        std::string strnum = std::to_string(x);
        std::string org = strnum;
        std::reverse(strnum.begin(),strnum.end());
        return (org==strnum);
    }
};
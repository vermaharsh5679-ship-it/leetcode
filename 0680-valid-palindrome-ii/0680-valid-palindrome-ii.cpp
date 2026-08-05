class Solution {
public:
// bool ispalindrome(string s,int i,int j){
//     while(i<j){
//         if(s.at(i)==s.at(j)){
//             i++;
//             j--;
//         }else
//          return false;
//     }
//     return true;
// }
//     bool validPalindrome(string s) {
//         int i=0;
//         int j=s.size()-1;
//         while(i<j){
//             if(s.at(i)==s.at(j)){
//                 i++;
//                 j--;
//             }
//             else{
//                 return ispalindrome(s,i+1,j) || ispalindrome(s,i,j-1);
//             }
//         }
//         return true;
#include <string>
#include <algorithm>

    bool validPalindrome(std::string s) {
        int l = s.length();
        int m = l / 2;

        for (int i = 0; i < m; i++) {
            if (s[i] == s[l - i - 1]) {
                continue;
            } else {
                // Extract left-skipped and right-skipped substrings
                std::string skip_left = s.substr(i + 1, (l - i) - (i + 1));
                std::string skip_right = s.substr(i, (l - i - 1) - i);

                // Helper to check if string is palindrome
                auto isPalindrome = [](const std::string& str) {
                    std::string rev = str;
                    std::reverse(rev.begin(), rev.end());
                    return str == rev;
                };

                return isPalindrome(skip_left) || isPalindrome(skip_right);
            }
        }
        return true;
    }
};
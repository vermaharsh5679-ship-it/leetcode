class Solution {
public:
    bool isPalindrome(string s) {
        std::string c="";
       for(char ch:s){
        if(isalnum(ch)){
            c+=tolower(ch);
        }
       }
       string cleaned=c;
       std::reverse(cleaned.begin(),cleaned.end());
       if(cleaned==c){
       return true;
       }
       return false;
    }
};
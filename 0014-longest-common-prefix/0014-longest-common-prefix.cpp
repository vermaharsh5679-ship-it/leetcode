class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
        return "";
         std::string s="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        for(int i=0;i<strs[0].length();i++){
            if(strs[0][i]!=strs[n-1][i]){
            break;
            }
             s.push_back(strs[0][i]);
        }
        return s;
    }
};
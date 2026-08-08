class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m=word1.length();
        int n=word2.length();
        int i=0;
        string s="";
        int o=max(m,n);
        for(int i=0;i<o;i++){
            if(i<m){
            s.push_back(word1[i]);
            }
            if(i<n){
            s.push_back(word2[i]);
            }
        }
        return s;
    }
};
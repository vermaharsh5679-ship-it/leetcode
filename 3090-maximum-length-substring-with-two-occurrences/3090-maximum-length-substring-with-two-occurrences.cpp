class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int>freq(26,0);
        int sukuna=0;
        int gojo=0;
        for(int i=0;i<s.length();i++){
             freq[s[i]-'a']++;
             while(freq[s[i]-'a']>2){
                freq[s[sukuna]-'a']--;
                sukuna++;
             }
             gojo=max(gojo,i-sukuna+1);
        }
        return gojo;

    }
};
class Solution {
public:
    bool isSubsequence(string s, string t) {
    int f=0;
    int g=0;
    while(f<s.size() && g<t.size()){
        if(s[f]==t[g]){
            f++;
        }
        g++;
    }
    return f==s.size();
    }
};
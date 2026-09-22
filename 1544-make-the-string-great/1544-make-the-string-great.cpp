class Solution {
public:
    string makeGood(string s) {
        string result="";
        for(char ch:s){
        if(!result.empty()){
            char last=result.back();
        if(abs(last-ch)==32){
            result.pop_back();
            continue;
        }
        }
        result.push_back(ch);
    }
    return result;
    }
};
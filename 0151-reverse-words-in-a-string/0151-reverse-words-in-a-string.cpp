class Solution {
public:
    string reverseWords(string s) {
     stringstream ss(s);
     string word;
     vector<string> words;
        while (ss >> word) {
            words.push_back(word);
        }
        string s1="";
        for(int i=words.size()-1;i>=0;i--){
            s1=s1+words[i];
            if(i!=0){
                s1=s1+" ";
            }
        }
        return s1;
    }
};
class Solution {
public:
    int lengthOfLastWord(string s) {
      while (!s.empty() && s.back() == ' ') {
            s.pop_back();
        }
        std::reverse(s.begin(),s.end());
        int count=0;
        for(char i:s){
            if(i==' ')
            break;
            else
            count++;
        }
        return count;
    }
    
};
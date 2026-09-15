class Solution {
public:
    string largestOddNumber(string num) {
        int x=num.size()-1;
        string c="";
     while(x>=0){
        int k=num[x]-'0';
        if(k%2!=0){
            return num;
        }
        else{
            num.erase(x,1);
            x--;
        }
     }
     return c;
    }
};
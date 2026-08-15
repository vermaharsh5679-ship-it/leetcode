class Solution {
public:
    string convert(string s, int numRows) { 
        if (numRows==1)
        return s; 
        int n=s.size();
        vector<vector<char>>v(numRows,vector<char>(n,' '));
        int i=0;
        int row=0;
        int col=0;
    while(i<n){
        while(row<numRows && i<n){
            v[row][col]=s[i];
            row++;
            i++;
        }
        row-=2;
        col++;
        while(row>=0 && i<n){
            v[row][col]=s[i];
            row--;
            col++;
            i++;
        }
        row+=2;
    }
    string ans="";
     for (int r = 0; r < numRows; r++) {
            for (int c = 0; c < n; c++) {
                if (v[r][c] != ' ') {
                    ans += v[r][c];
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int N = matrix.size();       
    int M = matrix[0].size(); 
    std::vector<std::vector<int>> transpose(M, std::vector<int>(N));
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
        transpose[i][j]=matrix[j][i];
        }
    }
    return transpose;
    }
};
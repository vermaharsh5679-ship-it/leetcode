class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         int N = matrix.size();
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i=0;i<matrix.size();i++){
          std::reverse(matrix[i].begin(), matrix[i].end());
    }

    }
};
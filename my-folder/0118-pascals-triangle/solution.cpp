class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>> pascalTriangel;

      for(int i = 0; i<numRows; ++i){
        vector<int> row(i+1, 1);

        for(int j = 1; j<i; ++j){
            row[j] = pascalTriangel[i-1][j-1] + pascalTriangel[i-1][j];
        }

        pascalTriangel.push_back(row);
      }
      return pascalTriangel;
    }
};

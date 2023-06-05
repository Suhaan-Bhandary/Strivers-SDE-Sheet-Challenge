#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define endl "\n"
#define PIE 3.141592653

// TUF: https://takeuforward.org/data-structure/set-matrix-zero/
// LeetCode: https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
   public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> rows(m, 0), cols(n, 0);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }

        for (int row = 0; row < m; row++) {
            if (rows[row] == 0) continue;
            for (int k = 0; k < n; k++) {
                matrix[row][k] = 0;
            }
        }

        for (int col = 0; col < n; col++) {
            if (cols[col] == 0) continue;
            for (int k = 0; k < m; k++) {
                matrix[k][col] = 0;
            }
        }
    }
};

int main() {
    // Main Function
    return 0;
};
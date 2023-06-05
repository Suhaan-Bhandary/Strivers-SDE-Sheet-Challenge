#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define endl "\n"
#define PIE 3.141592653

// TUF:
// https://takeuforward.org/data-structure/program-to-generate-pascals-triangle/
// LeetCode: https://leetcode.com/problems/pascals-triangle/

class Solution {
   public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;
        pascalTriangle.push_back({1});

        for (int row = 2; row <= numRows; row++) {
            vector<int> temp;
            temp.push_back(1);

            int n = pascalTriangle.size();
            for (int col = 1; col < row - 1; col++) {
                temp.push_back(pascalTriangle[n - 1][col - 1] +
                               pascalTriangle[n - 1][col]);
            }

            temp.push_back(1);

            pascalTriangle.push_back(temp);
        }

        return pascalTriangle;
    }
};

int main() {
    // Main Function
    return 0;
};
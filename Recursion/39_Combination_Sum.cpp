#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define endl "\n"
#define PIE 3.141592653

// TUF: https://takeuforward.org/data-structure/combination-sum-1/
// LeetCode: https://leetcode.com/problems/combination-sum/

class Solution {
   public:
    void getCombinations(int idx, vector<int> &candidates, int target,
                         vector<int> &combination,
                         vector<vector<int>> &result) {
        if (target == 0) {
            result.push_back(combination);
            return;
        }

        if (target < 0) return;
        if (idx == candidates.size()) return;

        // leave
        getCombinations(idx + 1, candidates, target, combination, result);

        // take
        combination.push_back(candidates[idx]);
        getCombinations(idx, candidates, target - candidates[idx], combination,
                        result);
        combination.pop_back();
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
        vector<vector<int>> result;
        vector<int> combination;

        getCombinations(0, candidates, target, combination, result);

        return result;
    }
};
int main() {
    // Main Function
    return 0;
};
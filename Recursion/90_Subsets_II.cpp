#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define endl "\n"
#define PIE 3.141592653

// TUF:
// https://takeuforward.org/data-structure/subset-ii-print-all-the-unique-subsets/
// LeetCode: https://leetcode.com/problems/subsets-ii/

class Solution {
   public:
    void getSubsets(int idx, vector<int> &nums, vector<int> &subset,
                    vector<vector<int>> &result) {
        if (idx == nums.size()) {
            result.push_back(subset);
            return;
        }

        // Find the first non similar index
        int curr = idx;
        while (curr < nums.size() && nums[curr] == nums[idx]) curr++;

        // leave
        getSubsets(curr, nums, subset, result);

        for (int i = idx; i < curr; i++) {
            subset.push_back(nums[i]);
            getSubsets(curr, nums, subset, result);
        }

        // remove the inserted ones
        for (int i = idx; i < curr; i++) {
            subset.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> result;
        vector<int> subset;
        getSubsets(0, nums, subset, result);

        return result;
    }
};

int main() {
    // Main Function
    return 0;
};
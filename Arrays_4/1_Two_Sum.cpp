#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define endl "\n"
#define PIE 3.141592653

// TUF:
// https://takeuforward.org/data-structure/two-sum-check-if-a-pair-with-given-sum-exists-in-array/
// LeetCode:https://leetcode.com/problems/two-sum/

class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> m;

        for (int i = 0; i < n; i++) {
            int num = nums[i];

            if (m.count(target - num)) {
                return {m[target - num], i};
            }

            m[num] = i;
        }

        return {-1, -1};
    }
};

int main() {
    // Main Function
    return 0;
};
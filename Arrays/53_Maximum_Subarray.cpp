#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define endl "\n"
#define PIE 3.141592653

// TUF:
// https://takeuforward.org/data-structure/kadanes-algorithm-maximum-subarray-sum-in-an-array/
// LeetCode:https://leetcode.com/problems/maximum-subarray/

class Solution {
   public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN, preSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            preSum += nums[i];
            maxi = max(preSum, maxi);

            preSum = max(preSum, 0);
        }

        return maxi;
    }
};

int main() {
    // Main Function
    return 0;
};
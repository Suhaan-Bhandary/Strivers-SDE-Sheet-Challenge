#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define endl "\n"
#define PIE 3.141592653

// LeetCode: https://leetcode.com/problems/3sum/
// TUF:
// https://takeuforward.org/data-structure/3-sum-find-triplets-that-add-up-to-a-zero/

class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        vector<vector<int>> result;

        for (auto num : nums) cout << num << " ";
        cout << endl;

        for (int i = 0; i < n; i++) {
            int target = 0;
            target -= nums[i];

            if (i != 0 && nums[i] == nums[i - 1]) continue;

            int low = i + 1, high = n - 1;
            while (low < high) {
                if (nums[low] + nums[high] == target) {
                    // cout << i << " " << low << " " << high << endl;
                    result.push_back({nums[i], nums[low], nums[high]});

                    // skip the same ones
                    while (low < high && nums[low] == nums[low + 1]) low++;
                    while (low < high && nums[high] == nums[high - 1]) high--;

                    low++;
                    high--;
                } else if (nums[low] + nums[high] < target) {
                    low++;
                } else {
                    high--;
                }
            }
        }

        return result;
    }
};

int main() {
    // Main Function
    return 0;
};
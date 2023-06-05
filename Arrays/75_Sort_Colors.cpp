#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define endl "\n"
#define PIE 3.141592653

// TUF: https://takeuforward.org/data-structure/sort-an-array-of-0s-1s-and-2s/
// LeetCode: https://leetcode.com/problems/sort-colors/

class Solution {
   public:
    void sortColors(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        for (int i = 0; i <= high; i++) {
            if (nums[i] == 0) {
                swap(nums[low], nums[i]);
                low++;
            } else if (nums[i] == 2) {
                swap(nums[high], nums[i]);
                high--;
                i--;
            }
        }
    }
};

int main() {
    // Main Function
    return 0;
};
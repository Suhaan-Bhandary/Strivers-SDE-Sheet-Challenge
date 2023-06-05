#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define endl "\n"
#define PIE 3.141592653

// TUF: https://takeuforward.org/data-structure/stock-buy-and-sell/
// LeetCode: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, mini = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            maxProfit = max(prices[i] - mini, maxProfit);
            mini = min(prices[i], mini);
        }

        return maxProfit;
    }
};

int main() {
    // Main Function
    return 0;
};
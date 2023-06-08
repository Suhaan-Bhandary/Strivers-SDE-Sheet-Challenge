#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define endl "\n"
#define PIE 3.141592653

// LeetCode: https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
   public:
    void expand(int low, int high, string &s, string &result) {
        while (low >= 0 && high < s.size()) {
            if (s[low] != s[high]) break;
            low--;
            high++;
        }

        int sSize = max(high - low - 1, 0);

        if (sSize > result.size()) {
            result = s.substr(low + 1, sSize);
        }
    }

    string longestPalindrome(string s) {
        string result = "";

        for (int i = 0; i < s.size(); i++) {
            expand(i, i, s, result);
            expand(i, i + 1, s, result);
        }

        return result;
    }
};

int main() {
    // Main Function
    return 0;
};
#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define endl "\n"
#define PIE 3.141592653

// LeetCode: https://leetcode.com/problems/reverse-words-in-a-string
// TUF: https://takeuforward.org/data-structure/reverse-words-in-a-string/

class Solution {
   public:
    string reverseWords(string s) {
        string temp = "";
        string result = "";

        for (int i = s.size() - 1; i >= 0; i--) {
            int ch = s[i];

            if (ch == ' ') {
                if (temp.empty()) continue;

                reverse(temp.begin(), temp.end());
                result += temp;
                result.push_back(' ');

                temp.clear();
                continue;
            }

            temp.push_back(ch);
        }

        if (!temp.empty()) {
            reverse(temp.begin(), temp.end());
            result += temp;
            temp.clear();
        }

        if (result.back() == ' ') result.pop_back();
        return result;
    }
};

int main() {
    // Main Function
    return 0;
};
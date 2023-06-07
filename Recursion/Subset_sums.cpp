#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define endl "\n"
#define PIE 3.141592653

// TUF: https://takeuforward.org/data-structure/subset-sum-sum-of-all-subsets/
// GFG: https://practice.geeksforgeeks.org/problems/subset-sums2234/1

class Solution {
   public:
    void getSubSetSums(int i, int total, vector<int> &arr,
                       vector<int> &result) {
        if (i == arr.size()) {
            result.push_back(total);
            return;
        }

        // take or leave
        getSubSetSums(i + 1, total + arr[i], arr, result);
        getSubSetSums(i + 1, total, arr, result);
    }

    vector<int> subsetSums(vector<int> arr, int N) {
        vector<int> result;

        getSubSetSums(0, 0, arr, result);

        return result;
    }
};

int main() {
    // Main Function
    return 0;
};
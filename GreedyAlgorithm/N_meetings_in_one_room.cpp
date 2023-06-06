#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define endl "\n"
#define PIE 3.141592653

// TUF: https://takeuforward.org/data-structure/n-meetings-in-one-room/
// GFG:
// https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1

class Solution {
   public:
    bool static comparator(const vector<int> &a, const vector<int> &b) {
        if (a[1] == b[1]) return a[0] < b[0];
        return a[1] < b[1];
    }

    int maxMeetings(int start[], int end[], int n) {
        vector<vector<int>> meetings;
        for (int i = 0; i < n; i++) {
            meetings.push_back({start[i], end[i]});
        }

        int count = 0;

        sort(meetings.begin(), meetings.end(), comparator);
        int lastEnd = -1;

        for (auto meeting : meetings) {
            int start = meeting[0];
            int end = meeting[1];

            if (start > lastEnd) {
                lastEnd = end;
                count++;
            }
        }

        return count;
    }
};

int main() {
    // Main Function
    return 0;
};
#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define endl "\n"
#define PIE 3.141592653

// TUF: https://takeuforward.org/data-structure/reverse-a-linked-list/
// LeetCode: https://leetcode.com/problems/reverse-linked-list

//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
   public:
    ListNode *reverseList(ListNode *head) {
        ListNode *curr = head, *pre = nullptr;

        while (curr) {
            ListNode *temp = curr->next;

            curr->next = pre;
            pre = curr;
            curr = temp;
        }

        return pre;
    }
};

int main() {
    // Main Function
    return 0;
};
#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define endl "\n"
#define PIE 3.141592653

// LeetCode: https://leetcode.com/problems/rotate-list/description/
// TUF: https://takeuforward.org/data-structure/rotate-a-linked-list/

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
   public:
    ListNode *rotateRight(ListNode *head, int k) {
        if (!head || !head->next) return head;
        if (k == 0) return head;

        ListNode *lastNode = head;
        int n = 0;
        while (lastNode->next) {
            n++;
            lastNode = lastNode->next;
        }
        n++;

        ListNode *pre = head;

        // Find the kth node
        k = n - k % n - 1;
        while (k--) pre = pre->next;

        ListNode *temp = pre->next;
        if (!temp) return head;

        pre->next = nullptr;
        lastNode->next = head;

        return temp;
    }
};

int main() {
    // Main Function
    return 0;
};
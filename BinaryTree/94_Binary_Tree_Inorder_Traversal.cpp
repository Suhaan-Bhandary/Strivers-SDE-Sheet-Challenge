#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define endl "\n"
#define PIE 3.141592653

// TUF:
// https://takeuforward.org/data-structure/inorder-traversal-of-binary-tree/
// LeetCode: https://leetcode.com/problems/binary-tree-inorder-traversal/

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

class SolutionRecursive {
   public:
    void inorder(TreeNode *node, vector<int> &result) {
        if (!node) return;

        inorder(node->left, result);
        result.push_back(node->val);
        inorder(node->right, result);
    }

    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> result;
        inorder(root, result);
        return result;
    }
};

class SolutionIterative {
   public:
    vector<int> inorderTraversal(TreeNode *root) {
        stack<TreeNode *> stk;

        TreeNode *curr = root;
        vector<int> result;

        while (!stk.empty() || curr) {
            while (curr) {
                stk.push(curr);
                curr = curr->left;
            }

            curr = stk.top();
            stk.pop();

            result.push_back(curr->val);
            curr = curr->right;
        }

        return result;
    }
};

int main() {
    // Main Function
    return 0;
};
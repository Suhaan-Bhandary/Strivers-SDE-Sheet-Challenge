#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define endl "\n"
#define PIE 3.141592653

// LeetCode: https://leetcode.com/problems/longest-common-prefix/description/

class Solution {
   public:
    struct TrieNode {
        int count;
        bool isEnd;
        vector<TrieNode *> childrens;

        TrieNode() {
            count = 0;
            isEnd = false;
            childrens = vector<TrieNode *>(26, nullptr);
        }
    };

    void build(const string &word, TrieNode *node) {
        TrieNode *curr = node;
        for (auto ch : word) {
            int idx = ch - 'a';
            if (curr->childrens[idx] == nullptr) {
                curr->childrens[idx] = new TrieNode();
            }

            curr->count++;
            curr = curr->childrens[idx];
        }

        curr->count++;
        curr->isEnd = true;
    }

    string getPrefix(TrieNode *node) {
        if (node == nullptr) return "";

        string prefix = "";
        TrieNode *curr = node;

        while (!curr->isEnd) {
            // check if only one child exits
            int idx = -1;
            for (int i = 0; i < 26; i++) {
                if (curr->childrens[i] != nullptr) {
                    if (idx != -1) return prefix;
                    idx = i;
                }
            }

            if (idx == -1) return prefix;

            prefix.push_back('a' + idx);
            curr = curr->childrens[idx];
        }

        return prefix;
    }

    string longestCommonPrefix(vector<string> &strs) {
        // build trie
        TrieNode *node = new TrieNode();
        for (auto word : strs) build(word, node);

        // search prefix
        return getPrefix(node);
    }
};

int main() {
    // Main Function
    return 0;
};
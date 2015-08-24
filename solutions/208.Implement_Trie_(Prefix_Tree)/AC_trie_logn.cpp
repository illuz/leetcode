/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_trie_logn.cpp
*  Create Date: 2015-08-24 18:44:56
*  Descripton:   
*/

#include <bits/stdc++.h>

using namespace std;
const int SIZE = 26;

class TrieNode {
public:
    TrieNode* p[SIZE];
    int val;
    
    // Initialize your data structure here.
    TrieNode() {
        val = 0;
        memset(p, 0, sizeof(p));
    }
};

class Trie {
public:
    Trie() {
        root = new TrieNode();
    }

    // Inserts a word into the trie.
    void insert(string word) {
        TrieNode *cur = root;
        for (auto ch : word) {
            int i = num(ch);
            if (cur->p[i] == NULL) {
                cur->p[i] = new TrieNode();
            }
            cur = cur->p[i];
        }
        cur->val++;
    }

    // Returns if the word is in the trie.
    bool search(string word) {
        TrieNode *cur = root;
        for (auto ch : word) {
            int i = num(ch);
            if (cur->p[i] == NULL) {
                return false;
            }
            cur = cur->p[i];
        }
        return cur->val > 0;
    }

    // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(string prefix) {
        TrieNode *cur = root;
        for (auto ch : prefix) {
            int i = num(ch);
            if (cur->p[i] == NULL) {
                return false;
            }
            cur = cur->p[i];
        }
        return true;
    }

private:
    TrieNode* root;

    // the method to calculate the number of a char
    int num(char x) { return x - 'a'; }
};


int main() {
    Trie trie;
    trie.insert("abc");
    trie.insert("bc");
    cout << trie.search("b") << endl;
    cout << trie.search("bc") << endl;
    cout << trie.search("a") << endl;
    cout << trie.search("abc") << endl;
    cout << trie.startsWith("ab") << endl;
    return 0;
}


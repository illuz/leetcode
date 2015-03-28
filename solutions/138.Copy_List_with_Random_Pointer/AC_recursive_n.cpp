/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_recursive_n.cpp
*  Create Date: 2015-03-28 10:09:50
*  Descripton:  O(n) space: unordered_map + stack usage.
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

// Definition for singly-linked list with a random pointer.
struct RandomListNode {
    int label;
    RandomListNode *next, *random;
    RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
};

class Solution {
private:
    RandomListNode *dfscopy(RandomListNode *head,
            unordered_map<int, RandomListNode*> &nodeTable) {
        if (!head)
            return head;
        if (nodeTable.count(head->label))
            return nodeTable[head->label];
        RandomListNode *dup = new RandomListNode(head->label);
        nodeTable[head->label] = dup;
        dup->next = dfscopy(head->next, nodeTable);
        dup->random = dfscopy(head->random, nodeTable);
        return dup;
    }

public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        unordered_map<int, RandomListNode*> nodeTable;
        return dfscopy(head, nodeTable);
    }
};

int main() {

    return 0;
}


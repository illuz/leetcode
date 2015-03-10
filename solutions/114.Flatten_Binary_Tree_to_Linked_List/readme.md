## 114. Flatten Binary Tree to Linked List (Medium)

### **链接**：
题目：https://leetcode.com/problems/flatten-binary-tree-to-linked-list/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
把一棵树变成一长条。

### **分析**：

1. (**C++**)DFS，先把左右两边的子树处理好，再合并。
2. (**Java**)不递归而用 Stack 来做。  

这两种做法的时间复杂度和最坏空间都是 O(n)。


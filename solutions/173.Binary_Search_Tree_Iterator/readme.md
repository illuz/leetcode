## 173. Binary Search Tree Iterator (Medium)

### **链接**：
题目：https://leetcode.com/problems/binary-search-tree-iterator/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
实现一个 BST 的类。

### **分析**：

1. **(C++)** 初始化的时候就将中序遍历处理好，保存在 queue 里
2. **(Python)** 用 stack 做，一边求一边处理即可。
3. Morris Travese Tree，可以用 O(1) 的空间解决这题，详见 [099. Recover Binary Search Tree (Hard)](https://github.com/illuz/leetcode/blob/master/solutions/099.Recover_Binary_Search_Tree)

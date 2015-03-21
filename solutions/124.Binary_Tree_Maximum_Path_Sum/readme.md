## 124. Binary Tree Maximum Path Sum (Hard)

### **链接**：
题目：https://leetcode.com/problems/binary-tree-maximum-path-sum/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
求一棵二叉树上的最大路径。

### **分析**：
直接 DFS 就可以了，返回以这一棵子树且一端在上的最大路径，然后维护一个最大路径就行了。

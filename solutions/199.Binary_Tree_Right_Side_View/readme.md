## 199. Binary Tree Right Side View (Medium)

### **链接**：
题目：https://leetcode.com/problems/binary-tree-right-side-view/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

假设你站在一棵树的右边，问从上到下看到的节点。

### **分析**：

其实就是求树每一层的最右边节点。  

1. **(Python)** 可以直接 DFS 遍历一遍，维护最右节点就行了。
2. **(C++)** 也可以用两个 queue 来实现层次遍历。


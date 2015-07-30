## 235. Lowest Common Ancestor of a Binary Search Tree (Easy)

### **链接**：
题目：https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

求一个搜索二叉树的 LCA（最近公共祖先）。

### **分析**：

可以利用二叉树的性质做，只要从根节点向下找，如果 `leftval <= sub_root.val <= rightval`，那 sub_root 就是他们的 LCA。  
可以用递归做，也可以迭代做。  


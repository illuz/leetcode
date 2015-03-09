## 109. Convert Sorted List to Binary Search Tree (Medium)

### **链接**：
题目：https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
为一个排过序的链表建一棵平衡的 BST。

### **分析**：

1. 跟上一题一样找中间数递归，不过由于这题是链表，所以要用双指针找中间数
2. 还有种思路是中序遍历，再一一加节点。

## 230. Kth Smallest Element in a BST (Medium)

### **链接**：
题目：https://leetcode.com/problems/kth-smallest-element-in-a-bst/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

标题清楚说明了题意，求 BST 上的第 k 小。

### **分析**：

因为是 BST，所以直接 DFS 求树大小，在求的时候找出第 k 大就行了。  
当然 DFS 的缺陷就是用了 O(log(n)) 的空间。  
用非递归的解法就可以 O(1) 空间了。可以看：https://leetcode.com/discuss/46160/o-n-time-o-1-space-by-using-morris-inorder-traverse  

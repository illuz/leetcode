## 098.Validate_Binary_Search_Tree

### **链接**：
题目：https://leetcode.com/problems/validate-binary-search-tree/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
判断一个树是否是搜索二叉树 (BST)  

### **分析**：

有几种解法：  

1. 直接 DFS ，判断这棵子树是否是在 [maxval, minval] 范围中
2. 中序遍历下，判断序列是否是递增的
3. DFS ，每次返回最大值或最小值，再进行判断  

都不是很难实现。  
这里用的是第一种方法，需要注意的坑是 maxval 和 minval 会有超 int 的情况，所以用 long long 类型。

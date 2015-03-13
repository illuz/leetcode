## 035. Search Insert Position (Medium)

### **链接**：
题目：https://leetcode.com/problems/search-insert-position/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
要把一个数有序插入到一个有序数组里，问插入的位置。

### **分析**：
还是二分变形题。  

1. 用 STL 的 `lower_bound` 偷懒。
2. 二分，最后注意判断一下是否找到，要输出什么。

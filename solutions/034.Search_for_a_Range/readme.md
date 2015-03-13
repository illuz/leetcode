## 034. Search for a range (Medium)

### **链接**：
题目：https://leetcode.com/problems/search-for-a-range/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
在有序数组中找到一个数的范围。（因为数有重复）

### **分析**：
还是二分搜索变形。  

1. **(C++)**直接用 C++ STL 的 `lower_bound` 和 `upper_bound` 偷懒。
2. **(Java)**直接从普通的二分改一下就行了。

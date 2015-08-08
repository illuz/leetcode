## 040. Combination Sum II (Medium)

### **链接**：
题目：https://leetcode.com/problems/combination-sum-ii/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
跟 039 一样（给出一些正整数集合，以及一个目标数，从集合中选择一些数使得它们的和等于目标数），不过不能选重复的数。

### **分析**：

同样暴力 DFS，不过要考虑重复会复杂点。  
还要考虑解集里不能有相同的解。  

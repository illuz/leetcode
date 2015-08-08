## 039. Combination Sum (Medium)

### **链接**：
题目：https://leetcode.com/problems/combination-sum/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
给出一些正整数集合，以及一个目标数，从集合中选择一些数使得它们的和等于目标数，可以重复选择集合里的数。  
得到的解的集合不能有重复。

### **分析**：

暴力搜索过去是可以的，先排好序，然后用 DFS，每次有两种选择，一是选中当前的数然后递归当前数，二是不选当前数直接递归下个数。  
这题用来理解 DFS 是很不错的。

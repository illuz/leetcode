## 177. Nth Highest Salary (Medium)

### **链接**：
题目：https://leetcode.com/problems/nth-highest-salary/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
求第 N 大的工资。

### **分析**：

[176.Second_Highest_Salary](https://github.com/illuz/leetcode/tree/master/solutions/176.Second_Highest_Salary) 的变形题。  
算法题做多了，我一下就写了个递归，然后被告知 SQL 不能用递归。  
可以用 `ORDER BY` 排序，再用 `LIMIT` 返回第 N 大值。  
题目要求返回值是 INT 或 NULL，所以我们可以用 `DISTINCT` 或用 `IFNULL(..., NULL)`。

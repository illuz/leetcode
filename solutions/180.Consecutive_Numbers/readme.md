## 180. Consecutive Numbers (Medium)

### **链接**：
题目：https://leetcode.com/problems/consecutive-numbers/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
查询一个表中连续出现 3 次一上的 Num。

### **分析**：

1. 用 JOIN 三个表可以做，不过要跑 1800 ms，而且只有在 id 都是连续的情况下才可行。
2. 有更好的解法，就是用 CASE，不过也是要跑 1600 ms。

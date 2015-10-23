## 241. Different Ways to Add Parentheses (Medium)

### **链接**：
题目：https://leetcode.com/problems/different-ways-to-add-parentheses/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
给一个式子每一步操作都加上括号，会有不同的结果，把所有结果都输出来。

### **分析**：

可以用递归做，只看某个符号，计算符号左边的式子和右边的式子，再对得到的两个解集进行交叉运算（笛卡尔乘）。  
因为有不少重复计算，可以进行记忆化。

## 131. Palindrome Partitioning (Medium)

### **链接**：
题目：https://leetcode.com/problems/palindrome-partitioning/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
把一个字符串分割，使每一部分都是回文。

### **分析**：

1. **(C++)** 递归，找到回文，然后递归后面部分
2. **(Python)** 对 1 进行优化，预处理每个位置对应的回文

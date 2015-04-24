## 201. Bitwise AND of Numbers Range (Medium)

### **链接**：
题目：https://leetcode.com/problems/bitwise-and-of-numbers-range/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

把 `[m, n]` 每个数进行与操作，问最后的数。

### **分析**：

问的是与操作，很容易发现结果都是 m 和 n 前面相同的部分 + 后面 0 填充，所以直接处理就行了。

1. 用 `while` 和位运算算出相同部分长度。
2. 不用循环，直接可以对 `n - m` 取 log 加 1 就是相同部分的长度了。

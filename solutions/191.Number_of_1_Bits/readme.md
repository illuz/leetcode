## 191. Number of 1 Bits (Easy)

### **链接**：
题目：https://leetcode.com/problems/number-of-1-bits/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
计算一个数二进制里 1 的个数。

### **分析**：

跟 [190. Reverse Bits (Easy)]https://github.com/illuz/leetcode/tree/master/solutions/190.Reverse_Bits) 一样。  

1. 先转 string 再计算
2. 或者用位运算来算 （Java 实现时要用 `>>>` 来进行位移，因为 `>>` 是会移到符号位的，`>>>` 是用来操作 unsigned 数的）
3. C++ Trick: 用 `bitset` 的 `count`
4. Python Trick: 用 `bin()` 和 `count()`

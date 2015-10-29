## 268. Missing Number (Medium)

### **链接**：
题目：https://leetcode.com/problems/missing-number/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
一个有 n 个元素数组，是由 0~n 去掉一个元素后构成的，求找出那个元素。

### **分析**：

1. 不用一个一个去找，直接求和就行了~ 然后和 0~n 的和的差就是那个数
2. 用异或的特性：`x^a^a=x`，对每个数异或一次后，再 0~n 异或一遍，缺的那个数就只异或一次，其它都异或两次，所以剩下的那个数就是缺的数。

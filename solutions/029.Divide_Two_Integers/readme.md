## 029. Divide Two Integers (Medium)

### **链接**：
题目：https://oj.leetcode.com/problems/divide-two-integers/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
实现除法，不能用乘、除和取模。

### **分析**：
不能用乘、除和取模，那剩下的，还有加、减和位运算。  

1. 会想到的就是一次次去减，不过这样会超时。
2. 在 1 的基础上优化下，跟快速幂一样，每次把除数翻倍（用位运算即可）。  

这里有坑，就是结果可能超 int 范围，所以最好用 long long 处理，之后再转 int。

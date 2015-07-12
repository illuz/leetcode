## 231. Power of Two (Easy)

### **链接**：
题目：https://leetcode.com/problems/power-of-two/
代码(github)：https://github.com/illuz/leetcode

### **题意**：
判断一个数是否是 2 的 x 次方。

### **分析**：

1. 刚开始的思路是直接 log2，想想用位运算会好点
2. 传入值为 int，最多就 32 位，所以直接 for 一遍，然后位移判断
3. 后来发现直接可以用 n&(n-1) 去判断就行啊

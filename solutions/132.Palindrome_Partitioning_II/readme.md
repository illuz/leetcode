## 132. Palindrome Partitioning II (Hard)

### **链接**：
题目：https://leetcode.com/problems/palindrome-partitioning-ii/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
把一个字符串分割，使每一部分都是回文。问最少的割数。

### **分析**：

1. **(C++)** 跟上题一样，递归求过去，不过会 TLE
2. 优化一，考虑对 1 进行优化，可以预处理子串是否是回文，就不用在这步重复算了
3. 优化二，既然可以用 DFS，当然可以记忆化了
4. **(Java)** 既然可以用记忆化，当然可以写成 DP 了
5. **(C++)** 在 DP 的时候，可以不用预处理判断是否回文，直接分奇偶讨论，见：[not need a table for palindrome](https://leetcode.com/discuss/9476/solution-does-not-need-table-palindrome-right-uses-only-space)

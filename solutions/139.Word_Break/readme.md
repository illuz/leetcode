## 139. Word Break (Medium)

### **链接**：
题目：https://leetcode.com/problems/word-break/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

给一个字符串和一个字典，问这个字符串能否用字典中的单词拼接成。

### **分析**：

1. 直接暴力地把字符串切割了，是 O(2^n) 复杂度，必须超时。（这里用 DFS 实现）
2. 很明显，暴力做了太多的重复问题，所以可以在 DFS 时记忆化一下，当然也可以用 DP 转移公式来做：`dp[i][j] = dp[i][k] && dp[k][j]，(i<k<j)`，复杂度是 `O(n^3)`
3. 还有另外一种 DP，`dp[i]` 表示 `S{0~i}` 是否有解，公式就是 `dp[i] = true (if s{j~i} in dict and dp[j] is true)`。

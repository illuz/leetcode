## 115. Distinct Subsequences (Hard)  
  
### **链接**：  
题目：https://leetcode.com/problems/distinct-subsequences/  
代码(github)：https://github.com/illuz/leetcode  
  
### **题意**：  
问有 S 中有几个子串是 T，S 的子串定义为在 S 中任意去掉 0 个或者多个字符形成的串。  
  
### **分析**：  
  
很明显得用 DP。  
有两种 DP 思路：  
  
1. 首先想到化为子问题：`dp[i][j]` 表示 `S[i...j]` 中有几个 `T`，但是转移不好想，而且 `dp[i][j]` 需要 O(n*n) 的空间，如果 S 长度大点就不行了。  
2. 正解：`dp[i][j]` 表示 `S[1...i]` 与 `T[1...j]` 匹配的个数。转移公式就是：`dp[i][j]=dp[i][j-1]{(if S[i]==T[j])+dp[i-1][j-1]}`。这思路也可以用记忆化来想，也是子问题。  
3. 对 2 进行优化，用滚动数组来减小空间，倒着滚可以降成一维。  
  
复杂度都是 O(n*m)。  
PS：听说开数组时从小到大开比较快，如 `dp[10][1000]` 会比 `dp[1000][10]` 快。（虽然我这没这样开）  
  
C++ 实现了空间 O(n*m) 的 DP 和 O(m) 的一维 DP。  
Python 实现了空间 O(2m) 的 DP。  

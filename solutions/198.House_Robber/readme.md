## 198.House Robber (Easy)

### **链接**：
题目：https://leetcode.com/problems/house-robber/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

在一个序列中取数，不能连续取，求最大和。

### **分析**：

很明显的 DP，公式是 `dp[i] = max(dp[i - 1], dp[i - 2] + num[i])`。  
你可以开个 DP 数组，不过这样就要用 O(n) 的空间了。  
从公式中很容易看出这是可以降维的，滚动地 DP 只要 O(1) 的空间。


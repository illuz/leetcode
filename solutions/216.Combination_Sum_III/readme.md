## 216. Combination Sum III (Medium)

### **链接**：
题目：https://leetcode.com/problems/combination-sum-iii/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
从 1-9 中取出 k 个数，使他们的和是 n，问所有的取法。

### **分析**：
跟系列前两题差不多，不过这题的 candidates 是 1-9，而且限制了 k 个数。  

1. 用 DFS 会比前两题好做，而且因为题目的原因，测试数据都不会很大，所以 DFS 都是 0 ms的。
2. 这题应该是可以用 DP 做的，因为 n,k 都不会很大，k 大于 10、n 大于一个最大值后是无解的。（然而要存的状态有点麻烦，所以先放着）

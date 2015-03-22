## 097. Interleaving String (Hard)  
  
### **链接**：  
题目：https://leetcode.com/problems/interleaving-string/  
代码(github)：https://github.com/illuz/leetcode  
  
### **题意**：  
问 s3 是否是 s1 和 s2 交错得到的。  
  
### **分析**：  
  
s3 中的一个字母 s1 和 s2 都有，那这算谁的？  
不同的决策会得到不同的结果，所以这个问题第一眼就感觉要搜索或 DP。  
  
1. 搜索，当遇到 s1[i] = s2[j] = s3[i+j] 时，分类讨论，一种判给 s1，再搜索下去，另一种判给 s2 再搜。复杂度是 O(2^n)  
2. 可以考虑对 1 算法进行记忆化，复杂度 O(n*m)  
3. (**C++**)DP。 `dp[i][j]` 表示 s1[i], s2[j] 时是否匹配 s3[i+j]，这样两种都会判断到了，公式：`dp[i][j] = (dp[i-1][j] && s1[i-1] == s3[i+j-1]) || (dp[i][j-1] && s1[j-1] == s3[i+j-1])`。时间复杂度 O(n^2)，空间 O(n^2)  
4. (**Java**)对 3 进行优化：使用滚动数组，减小空间复杂度为 O(n)  
5. 在 Discuss 里看到有个大神机智地用 BFS 解决了这题，太形象了！有兴趣可以观摩下：[C++ solution using BFS, with explanation](http://leetcode.com/discuss/19973/8ms-c-solution-using-bfs-with-explanation)  

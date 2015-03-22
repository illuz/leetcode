## 010.Regular_Expression_Matching

### **链接**：
题目：https://leetcode.com/problems/regular-expression-matching/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

给一个原串和一个正则表达式，问能不能匹配。

### **分析**：

1. 偷懒的方法是直接用语言自带的正则实现。(Python 又是一句话 =w=)
2. 用 DFS 的方法
3. 可以用 DP 的方法
    - 用数组 DP :`dp[i][j]` 表示 s[0..i] 和 p[0..j] 是否 match，当 `p[j] != '*'`，`b[i + 1][j + 1] = b[i][j] && s[i] == p[j]` ，当 `p[j] == '*'` 要再分类讨论，具体可以参考 [DP C++](https://leetcode.com/discuss/18970/concise-recursive-and-dp-solutions-with-full-explanation-in)，还可以压缩下把 dp 降成一维：参考[这里](https://leetcode.com/discuss/19902/share-a-scarce-dp-solution-in-java-time-o-mn-spaceo-n)
    - 用记忆化，就是把算过的结果保存下来，下次就不用再算了


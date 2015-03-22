## 005.Longest_Palindromic_Substring (Medium)

### **链接**：
题目：https://leetcode.com/problems/Longest-Palindromic-Substring/  
代码(github)：https://github.com/illuz/leetcode  

### **题意**：
求一个字符串中的最长回文子串。  

### **分析**：

回文的解法有不少：  

1. 暴力搜索 O(n^3)   
2. 动态规划 O(n^2)， `dp[i][j] = dp[i + 1][j - 1] (if s[i] == s[j])`  
3. 用[Manacher's ALGORITHM](http://blog.csdn.net/hcbbt/article/details/18952129)可达到 O(n) 时间。  

本题要用第三种算法。  
需要注意的是， Python 和 Java 的字符串和 C++ 的不一样，没有 `\0` 结尾，用'Manacher's ALGORITHM'的时候是不一样的。

## 032. Longest Valid Parentheses (Hard)

### **链接**：
题目：https://oj.leetcode.com/problems/longest-valid-parentheses/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
问一个字符串里最长的合法括号串的长度。

### **分析**：

1. **(C++)**用栈来做，如果匹配就出栈，然后长度就是 `cur - stack_top_pos` 也就是 - 匹配的前一个位置。 O(n) time, O(n) space。
2. **(C++)**栈消耗空间太多了，其实可以维护 () 匹配的长度，不过可能出现 `()))` 和 `((()` 的情况，所以要前后各扫一遍。O(n) time, O(1) space。
3. 用较复杂的 DP 来做，不过空间可没解法 2 那么优了。刚看到[我很久前的一个解法](http://blog.csdn.net/hcbbt/article/details/15494035)，用太多空间了Orz。现在来看还是 1、2 的做法好。

## 123. Best Time to Buy and Sell Stock III (Hard)  
  
### **链接**：  
题目：https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/  
代码(github)：https://github.com/illuz/leetcode  
  
### **题意**：  
给一个数组，`prices[i]` 表示第 i 天的交易值，也就是你在这天买入或卖出的交易值。  
你可以买入及卖出**最多两轮**，不过你一个时间只能拥有一个股票，求最大盈利。  
  
### **分析**：  
  
可以最多求两次，所以可以把它变成子问题，也就是枚举分界点，求左右两个子串的只能交易一次的最大值。  
子问题要递归解决吗？NO！跟 `121. Best Time to Buy and Sell Stock` 一样，子问题的解决是需要 O(n) 的，总的就是 O(n^2) 这跟暴力没有区别。  
所以我们就要用空间换时间了，只要预处理左子序列和右子序列的单次交易值 left[n] 和 right[n] 就行了，然后枚举分界点求 `max(left[i], right[i+1])` 就行了。总的复杂度是 O(n)。  
  
有没有办法不用 O(n) 的空间？  
大神告诉我们，有的：https://leetcode.com/discuss/18330/is-it-best-solution-with-o-n-o-1。  
假设刚开始持有 0 元，只用 4 个变量，分别是两次交易买入后和卖出后所持钱的最大值，一遍扫过去，维护这些变量就行了。  
其实还是不太好理解的。  

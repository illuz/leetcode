## 121. Best Time to Buy and Sell Stock (Medium)

### **链接**：
题目：https://leetcode.com/problems/best-time-to-buy-and-sell-stock/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
给一个数组，`prices[i]` 表示第 i 天的交易值，也就是你在这天买入或卖出的交易值。

### **分析**：

只要 `profit = prices[sell] - prices[buy] && buy < sell` 就行了，遍历一遍，维护 `profit` 即可。

## 228. Summary Ranges (Easy)

### **链接**：
题目：https://leetcode.com/problems/summary-ranges/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

给一个递增的数组，求里面**自然递增**的序列。

### **分析**：

就是直接判断是否是上个数 +1，不是就记录下来。  
如果 for 过去，最后一个递增区间得在 for 外面再写进去，可以偷懒在后面再放个最后一个数，事后再去掉。


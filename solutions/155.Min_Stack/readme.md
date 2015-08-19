## 155. Min Stack (Easy)

### **链接**：
题目：https://leetcode.com/problems/min-stack/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

要实现一个栈，这个栈有跟别的栈不一样的地方是有个 getMin() 方法，这个方法返回这个栈的最小值。

### **分析**：

用暴力都只会 TLE 或 MLE。
要再开一个单调栈来放小值。  
有一题用的就是这个思想，可以看看：[Sliding Window Maximum ](https://leetcode.com/problems/sliding-window-maximum/)。  

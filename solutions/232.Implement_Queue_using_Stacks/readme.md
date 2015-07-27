## 232. Implement Queue using Stacks (Easy)

### **链接**：
题目：https://leetcode.com/problems/implement-queue-using-stacks/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

用栈实现队列。

### **分析**：

1. 用两个栈做，一个主要数据，一个在 push 时临时倒出数据用的（当然也可以反着放数据，在 pop 和 peek 时再倒出数据）
2. 用两个栈做，一个做为前面专门做 pop()，一个做为后面的栈专门做 push()，通过两个栈协调可以做到平均 O(1) 的操作。（参考 [c++solution using two stack ,average O(1) time](https://leetcode.com/discuss/44482/c-solution-using-two-stack-average-o-1-time)）

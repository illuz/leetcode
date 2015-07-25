## 225. Implement Stack using Queues (Easy)

### **链接**：
题目：https://leetcode.com/problems/Implement-Stack-using-Queues/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
用 queue 实现 stack。  
只能用 queue 的基本操作。

### **分析**：

1. 直接用两个 queue 模拟，在 pop 和 top 的时候需要 O(n) 时间（top 可以用一个值维护，可以O(1)）（我不想用 size 方法，所以用两个 queue，不然用一个 queue 就行了）
2. O(1) 的算法是用链表实现 Queue，这样在 pop 和 top 时使用连接操作，就只要 O(1) 时间了，不过这可能有违题意（Java 的 Queue）

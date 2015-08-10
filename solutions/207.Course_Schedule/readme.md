## 207. Course Schedule (Medium)

### **链接**：
题目：https://leetcode.com/problems/course-schedule/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

学习课程 A 要先学课程 B，给出一些课程学习顺序，问这些课程能不能学完。

### **分析**：

经典的拓扑排序题，教科书般。  
这题问的是图中有没有环，或都说这个图是不是拓扑图。存下图后可以用 DFS 或队列/栈做。  


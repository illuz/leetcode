## 210. Course Schedule II (Medium)

### **链接**：
题目：https://leetcode.com/problems/course-schedule-ii/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
学习课程 A 要先学课程 B，给出一些课程学习顺序，给出学完这些课程的全部顺序。

### **分析**：
跟 [207](https://github.com/illuz/leetcode/tree/master/solutions/207.Course_Schedule) 一样拓扑排序，不过要记录路径。  

1. 用栈，只要每次记一下节点就行了。
2. 用 dfs，不能跟 207 一样直接一个一个 check 过去。先找出入度为 0 的节点，再 dfs 过去。dfs 中每个节点处理完子节点后再把自己节点加到路径中，这样就维护了一个倒序的路径，最后把这个路径反向一下就行了。  

资料：[Topological sorting](https://en.wikipedia.org/wiki/Topological_sorting)
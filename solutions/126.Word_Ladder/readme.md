## 127. Word Ladder (Medium)

### **链接**：
题目：https://leetcode.com/problems/word-ladder/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
给出起点，终点的单词，每次变换要从 dict 中找到一个单词，且只变换一个字母。  
问从起点到终点的最短变换路径长度。

### **分析**：

这是图论的题，把每个单词看成点，能变换就在点间连一条边，这样就出现一张无向图了。  

1. BFS 一遍就行了。
2. 从起点和终点一起开始 BFS，就是 双端BFS(two-end BFS)。  

对于图，可以先构造，也可以在 BFS 的时候再判断。

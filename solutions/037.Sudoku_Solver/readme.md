## 037. Sudoku Solver (Hard)

### **链接**：
题目：https://leetcode.com/problems/sudoku-solver/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
求解一个数独。

### **分析**：
DFS 暴力就行了。  
用二进制表示，位运算处理的话，会快很多的。  

其实在一个 `(n^2) * (n^2)` 的格中放 `n * n` 数，这是个 NP 难问题，就 9x9 的方格，就有 `9^81` 种组合，用 DFS 遍历一遍是不可想象的，所以在解一个空一点的 9x9 时就要跑好久。  
有个比较常用的优化方法就是用 `Dancing Links`，不过这也只是个剪枝，它仍是个 NP 难问题。  

Link:  
- [Sudoku - Wikipedia](http://en.wikipedia.org/wiki/Sudoku)
- - [Dancing Links](http://en.wikipedia.org/wiki/Dancing_Links)

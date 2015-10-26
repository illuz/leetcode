## 279. Perfect Squares (Medium)

### **链接**：
题目：https://leetcode.com/problems/perfect-squares/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
给出一个数，要求把这个数用最少的平方数分解，求最少用几个。

### **分析**：

这题最先的想法是用递归来做，后面发现可以转化为递推。用 C++ 做都能过。然后试了试 Python，发现如果没有用 static 的 Trick，这题用 Python 递归 MLE，递推 TLE。  

1. 递归。
2. 递推。
3. 递归或递推+static。static 就是在 class 下开一个静态的解集来记录所有解，每次调用时先去看看有没有解过，解过就直接返回。Memorization 的 reuse 思想。
4. BFS。把求解的过程看成一棵要，在里面找最短的路径就是解。
5. 数学。归纳出答案与解的关系，然后直接求。  

https://leetcode.com/discuss/58056/summary-of-different-solutions-bfs-static-and-mathematics 上面有很详细的解法，值得一看。

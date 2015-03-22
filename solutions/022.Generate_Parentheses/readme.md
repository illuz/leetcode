## 022.Generate_Parentheses (Medium)

### **链接**：
题目：https://leetcode.com/problems/generate-parentheses/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
产生有 n 对括号的所有有效字符串。

### **分析**：

1. 用 DFS 可以很快做出来，能加'('就加'('，能加')'就加')'。（下面的 C++ 实现）  
2. 还有很机智方法写出很短的 DFS 。 (Java 实现)  
3. 对于 DFS 都可以进行记忆化，用空间换时间。 (Python 实现)  

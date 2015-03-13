## 036. Valid Sudoku (Easy)

### **链接**：
题目：https://leetcode.com/problems/valid-sudoku/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
判断一个数独是否有效。  
有效的数独不强求有解。

### **分析**：
只要同一行、列、块里没有相同数字就行了。  
开个数组记录就行了，没什么难度，可以用二进制来表示，表位运算加速。  

（注意是判断有效，不是有解，我刚开始给求解了，TLE 了好多次。。。）

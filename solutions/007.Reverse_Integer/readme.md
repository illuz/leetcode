## 007.Reverse_Integer (Easy)

### **链接**：
题目：https://oj.leetcode.com/problems/Reverse-Integer/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
反转一个数。  

### **分析**：
注意读入和返回的数都是 int 型的，这时就要考虑反转后这个数会不会超 int，超的话就返回 0 。这时处理数时最好用比 int 大的类型，不然恐怕会超范围。  
当然也可以用 int ：`if (result > (INT_MAX/10))`
还有一点就是还要考虑前导零。  

## 008.String_to_Integer (Easy)

### **链接**：
题目：https://oj.leetcode.com/problems/string-to-integer-atoi/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
将一个字符串转化为 int 型。  

### **分析**：
注意如果超出范围就返回最接近的 int 数。  
如：2147483648 大于 INT_MAX(2147483647) ，就返回 2147483647 。  

之前可以用 sscanf 偷懒，最近更新了 case 就被卡了。  
要注意几点：  

1. 跳过前面的空格,\t,\n  
2. 范围界定  

使用 Python 的正则表达式可以很容易处理。  

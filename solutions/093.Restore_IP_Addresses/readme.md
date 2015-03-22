## 093.Restore_IP_Addresses

### **链接**：
题目：https://leetcode.com/problems/restore-ip-addresses/  
代码(github)：https://github.com/illuz/leetcode  

### **题意**：
给一个都是字母的字符串，加上点后可能会变成合法的 IP 地址，求一个字符串的所有合法地址。  

### **分析**：

不是很难的题目。  

1. DFS 过去，注意要处理一些细节  
2. 因为只有四个域，只要枚举每个域的长度，然后拆开字符串一个个判断就行了。  

这里用的是第二种方法，比较容易理解。  
Python 有方便的 str() 和 int()，可以很方便的用 lambda 和 map 实现判断部分。  

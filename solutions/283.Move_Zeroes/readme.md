## 283. Move Zeroes (Easy)

### **链接**：
题目：https://leetcode.com/problems/move-zeroes/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
把数组里的 0 都移动到右边。

### **分析**：

1. 直接用两个指针模拟就行了，一个指向可填充的位置，一个指向检查的位置。  
2. STL 大法：用 [remove](http://www.cplusplus.com/reference/algorithm/remove) 把 0 删掉，然后用 [fill](http://www.cplusplus.com/reference/algorithm/fill) 把后面那段置 0。

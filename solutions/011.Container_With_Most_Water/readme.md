## 011.Container_With_Most_Water

### **链接**：
题目：https://oj.leetcode.com/problems/container-with-most-water/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
给一些挡板，选两个挡板，求最大蓄水容量。

### **分析**：

可以看看[这个大神的详细算法](http://www.cnblogs.com/TenosDoIt/p/3812880.html)，给跪...  

1. 暴力 O(n*n) 会超时
2. 双指针，O(n) 时间和 O(1) 空间，应该是最优的算法了，上述的文章有这个算法的正确性证明。
3. 预处理每个挡板的左边最高和右边最高，这样蓄水区间就可以知道了  

这里只用了第二种算法。

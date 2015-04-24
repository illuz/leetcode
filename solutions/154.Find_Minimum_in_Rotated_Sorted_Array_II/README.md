## 154. Find Minimum in Rotated Sorted Array II (Hard)

### **链接**：
题目：https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
在一个旋转过的有序数组中找最小的数。不过里面的数有重复。

### **分析**：

与[上一题](https://github.com/illuz/leetcode/tree/master/solutions/153.Find_Minimum_in_Rotated_Sorted_Array) 差不多，不过在判断到前后相同时，不能一下子就判断，要把范围向内缩。  
因此，这个解法复杂度最坏是 O(n) 是全部都一样的数的。

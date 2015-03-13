## 033. Search in Rotated Sorted Array (Hard)

### **链接**：
题目：https://leetcode.com/problems/search-in-rotated-sorted-array/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
在一个旋转过的有序数组中找一个数。  
比如 `4 5 6 7 0 1 2` 就是一个“旋转过的有序数组”。

### **分析**：
这是单纯二分搜索的变形。  
因为旋转过不好定位，所以在找的时候可以先判断一下一个区间是完全有序的还是已经旋转过的，然后分类讨论。

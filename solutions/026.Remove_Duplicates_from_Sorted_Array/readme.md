## 026. Remove Duplicates from Sorted Array (Easy)

### **链接**：
题目：https://leetcode.com/problems/remove-duplicates-from-sorted-array/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
给一个有序数列，删重复的元素。

### **分析**：
如果可以开一个数组来存就非常容易。但是这题不让你用多余的空间。  
不过也不难，只要维护一个新的坐标就行了。  
用 C++ 的 STL 可以只要一句话：用 `unique` 实现功能，用 `distance` 计算大小。  
（之前看错题以为是无序的，写了几个无序的版本）  

Java 和 Python 的写法都和 C++ 的一样，这里就不写出来了。  

### **代码**：

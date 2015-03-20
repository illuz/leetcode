## 164. Maximum Gap (Hard)

### **链接**：
题目：https://leetcode.com/problems/maximum-gap/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
给你一个无序的数列，问在排序中相邻两数之差的最大值是多少，要求线性时间复杂度。

### **分析**：

比较排序的下限都是 O(nlogn)，如果要排序的话，就不能用比较排序了。  
那就不能排序了吗？不，我们可以考虑非比较排序：桶排序。  

很明显：相邻两数之差最小是 `bucketLen=(max-min)/(len-1)`。  
我们可以把数据范围(min~max)，分为 `(max-min)/bucketLen + 1` 个区间，而两数之差的最大值一定在区间之间产生。  
我们只需统计区间的最大最小值，然后判断后区间最小值和前区间最大值之差即可。


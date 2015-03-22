
## 004.Median_of_Two_Sorted_Arrays

### **链接**：
题目：https://leetcode.com/problems/Median-of-Two-Sorted-Arrays/
代码(github)：https://github.com/illuz/leetcode

### **题意**：
求两个有序数组的中位数。要求复杂度是 O(log(n + m))。

### **分析**：
两种思路：
1. 直接 merge 两个数组，然后求中位数，能过，不过复杂度是 O(n + m)。
2. 用二分的思路去做，这不好想，还要考虑到奇偶。可以转化思维，去求两个有序数组中的第 K 大数，这样就比较好想了。

---

**(English version)**

## 004.Median_of_Two_Sorted_Arrays


**Link**:
Problem: https://leetcode.com/problems/Median-of-Two-Sorted-Arrays/
Newest solutions in my Github: https://github.com/illuz/leetcode

**Analysis**：
Two ways to get it.
1. Merge the two arrays first and solve it. But the time complexity is O(n + m).
2. Use the method of binary search. This will be hard to think. Just consider to find the k-th biggest number in two sorted arrays and it will help you.

## 219. Contains Duplicate II

### **链接**：
题目：https://leetcode.com/problems/contains-duplicate-ii/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

问一个数组中有没有重复的数，且这两个数的下标差距不超过 k。  

系列文章：

- [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate)
- - [219. Contains Duplicate II](https://leetcode.com/problems/contains-duplicate-ii/)
- - [220. Contains Duplicate III](https://leetcode.com/problems/contains-duplicate-iii/)
-
- ### **分析**：
-
- 1. 直接用 217 的解法 2，再加上一个 k 大小的窗口限制就行了(sliding window)。
- 2. 考虑不用加窗口，直接上 hashmap，存每个数的下标，每次判断之前有没有存在和下标合法性，更新下标就行了。
-

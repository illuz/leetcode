## 220. Contains Duplicate III

### **链接**：
题目：https://leetcode.com/problems/contains-duplicate-iii/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

问一个数组中有没有重复的数，且这两个数的下标差距不超过 k，而且值差距不超过 t。  

系列文章：

- [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate)
- [219. Contains Duplicate II](https://leetcode.com/problems/contains-duplicate-ii/)
- [220. Contains Duplicate III](https://leetcode.com/problems/contains-duplicate-iii/)

### **分析**：

思路是维护一个大小不超过 k 的窗口，每加一个数前判断这个窗口中有没有差大于 t 的数。（nlogn)  
主要考虑的是数据结构。

1. (C++)用 set 和 multiset 都可以做，里面已经有封装 lower_bound 和 upper_bound 了，很方便。
2. (C++)当然你可以手写 BST，比较麻烦。
3. (Java)用 TreeSet 的 subSet 简直酸爽！  

**O(n) 算法**
Discuss 大神写的，实在太神了！  
就是把数都放到一个个桶里面，再去判断。  
链接：https://leetcode.com/discuss/38206/ac-o-n-solution-in-java-using-buckets-with-explanation  

PS：这题的样例有并不全面，test 只有有序的数组，所以 `[1,9,3,16,21,2], 2, 2` 返回了 false 的程序也对了。

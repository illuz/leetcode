## 217. Contains Duplicate

### **链接**：
题目：https://leetcode.com/problems/contains-duplicate
代码(github)：https://github.com/illuz/leetcode

### **题意**：
问一个数组中有没有重复的数。

### **分析**：

是时候展现 STL 的实力了！

1. 暴力求解，for 两层去找，TLE
2. 用 map 做 Hash，nlogn
3. 用数组构造 set，直接判断 set 的大小，Python 和 C++ 都可以一句话解决
4. 用 sort，再用 unique 进行去重
5. 如果不想用太高大上的 STL，可以 sort 后再二分找，当然你想手写快排也可以，复杂度也是 nlogn



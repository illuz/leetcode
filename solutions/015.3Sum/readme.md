## 015.3Sum (Medium)

### **链接**：
题目：https://leetcode.com/problems/3sum/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
在给定数列中找出三个数，使和为 0。

### **分析**：
先排序，再左右夹逼，复杂度 O(n*n)。  
N-sum 的题目都可以用夹逼做，复杂度可以降一维。  

这题数据更新后卡得很紧， C++ 不能全部加完再用 STL 的 erase 和 unique 去重，要一边判断一边加。


## 023. Merge k Sorted Lists (Hard)

### **链接**：
题目：https://leetcode.com/problems/merge-k-sorted-lists/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
和  [021. Merge Two Sorted Lists (Easy)](http://blog.csdn.net/hcbbt/article/details/44064639) 类似，这次要 Merge K 个。

### **分析**：

很明显可以想到利用已经完成的 Merge Two Sorted Lists 的函数来用。  
这时有两种方法：  
1. (C++) 用二分的思想，把每个 List 和它相邻的 List 进行 Merge，这样规模就缩小了一半了，再重复这样，就可以 O(nklogk) 完成。比如： [1, 2, ..., n] 的第一轮 Merge 是 [1, n/2], [2, n/2+1], ...  
2. (Python) 也是用二分的思想，就是把 Lists 分为两部分，分别递归 Merge k Sorted Lists 后变成两个 List ，然后再对这两 List 进行 Merge Two Sorted Lists 。  

这两种方法都是递归调用，都可以进行记忆化，用空间换时间，不过我不清楚会不会超空间（Memory Limit Exceed），所以就没试了~  

除了用二分的思路，还有更好写的方法，就是用堆(heap)，具体就是用优先队列(Priority Queue)。  
(Java) 先把每个 List 的第一个节点放进优先队列，每次取出队列中的最大值节点，再把那个节点的 next 放进去。  


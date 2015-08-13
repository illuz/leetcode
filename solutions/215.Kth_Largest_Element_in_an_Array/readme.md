## 215. Kth Largest Element in an Array (Medium)

### **链接**：
题目：https://leetcode.com/problems/Kth-Largest-Element-in-an-Array/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

求一个数组里的第 k 大。

### **分析**：

这题用 O(nlogn) 是可以过的，也就是说你可以先排序再找，也可以用 heap，priority_queu 等数据结构。  
当然，用 Quicksort 里的 Quick-select（也就是 partion）方法是可以做到 O(n) 的。（对于为啥 quick select 是 O(n) 的可以看 [Why is the runtime of the Selection Algorithm O(n)?](http://stackoverflow.com/questions/8783408/why-is-the-runtime-of-the-selection-algorithm-on)  

有个大神写了全套的解法：[4 C++ Solutions using Partition, Max-Heap, priority_queue and multiset respectively](https://leetcode.com/discuss/38336/solutions-partition-priority_queue-multiset-respectively)。

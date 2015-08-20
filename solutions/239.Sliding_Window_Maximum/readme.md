## 239. Sliding Window Maximum (Hard)

### **链接**：
题目：https://leetcode.com/problems/sliding-window-maximum/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

求一个数组中，固定大小的滑动窗口滑过，这个窗口中每一步的最大值。

### **分析**：

暴力 O(n*k) 是可以过的。（测试数据不够给力啊，这还是 Hard 的呢。）  
要如何在在更快的时间内解决这个问题呢？其实有几种做法。

1. 求一个窗口的最大值，不就是一个堆吗。维护一个最大堆，每次把要去掉的去掉，要加进来的加进来，然后取最大的。不过要找到该去掉的，在堆里面要 O(log(k)) 的时间，所以复杂度是 O(n*logk)
2. 要做到 O(n) 的话，要用到 Max-queue，这个数据结构的思想和 [155. Min Stack](https://leetcode.com/problems/min-stack/) 有点像，不过这里面是一个单调队列。

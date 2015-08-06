## 222. Count Complete Tree Nodes (Medium)

### **链接**：
题目：https://leetcode.com/problems/count-complete-tree-nodes/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

求一个完全二叉树的大小。

### **分析**：

1. 首先想到的是递归找下去，然而 TLE 了（不然题目的完全二叉树条件有什么用），看到要找 O(logn) 或 O(logn*logn) 的算法了。
2. 这题的本质就是要找最深层有几个节点。那么要如何定位最后的那个节点呢。看到之前递归算法写的 getDepth 方法，发现可以 O(logn) 去我得到 depth，那就可以获取左右的路径的深度，然后进行处理了：如果一样的话，这个子树就是满的，可以直接得到大小，如果不是一样的话，就分别求左右子树的大小。
3. 看了下 Discuss 有种跟我的差不多的做法，是求左子树的最左路径长度和右子树的最左路径长度，然后再递归。不过感觉没方法 2 好想。
4. 还有种方法，就是把最下面的数看成从 0 开始的数，然后这个数的二进制就是从根到叶子的左右拐向。这样每个数就对应一条唯一的路径了。然后去二分这个数，判断条件是在树上根据这个路径看能不能这个叶子节点。复杂度也是 O(lognlogn)，不过思想是不错。感兴趣的可以去看看：[link](https://leetcode.com/discuss/45467/extremely-solution-time-using-manipulation-binary-search)。

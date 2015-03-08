## 099. Recover Binary Search Tree (Hard)  
  
### **链接**：  
题目：https://leetcode.com/problems/recover-binary-search-tree/  
代码(github)：https://github.com/illuz/leetcode  
  
### **题意**：  
一棵 BST 有两个节点的值不小心互换了，要你把这棵树恢复了。  
  
### **分析**：  
  
**解法1**  
  
先得到中序遍历结果，再找出那俩节点，交换值就行了，不过要用 O(n) 的空间  
  
**解法2**  
  
好好想想要怎么才能不用 O(n) 的空间来得到中序遍历结果？  
Knuth 大神曾提出过这个问题，然后 Morris 大神用 [Threaded binary tree](http://en.wikipedia.org/wiki/Threaded_binary_tree) 实现了！  
下面这张图来自 Threaded binary tree 的 Wikipedia，让人一目了然。  
  
![Threaded binary tree](http://upload.wikimedia.org/wikipedia/commons/thumb/7/7a/Threaded_tree.svg/330px-Threaded_tree.svg.png)  
  
你可能想：  
不就是不开空间吗？直接递归不就行了？  
K 神当初可不是做这题而提出的问题，因为递归在内存的栈中可是要占最坏 O(n) 的空间的！他问的是非递归算法。  
非递归我只会用栈递归 Orz...  
而 Morris 的 Threaded binary tree 可以用 O(1) 的空间实现非递归中序遍历，在 Wikipedia 上有详细的 Python 版本。  
  
参考：  
  
- [Threaded binary tree - Wikipedia](http://en.wikipedia.org/wiki/Threaded_binary_tree)  
- [[LeetCode] Recover Binary Search Tree 解题报告 ](http://fisherlei.blogspot.com/2012/12/leetcode-recover-binary-search-tree.html)  
  

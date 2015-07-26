## 226. Invert Binary Tree (Easy) 

### **链接**：
题目：
代码(github)：https://github.com/illuz/leetcode

### **题意**：
Google 著名的反转二叉树问题，把整棵树横着反转过去。  
[Google: 90% of our engineers use the software you wrote (Homebrew), but you can’t invert a binary tree on a whiteboard so fuck off.](https://www.reddit.com/r/programming/comments/39d0u1/google_90_of_our_engineers_use_the_software_you/)

### **分析**：

其实这是一个遍历问题。可以递归做也可以用栈做。  
我在考虑能不能用 O(1) 空间的算法来解开这个（类似 [099. Recover Binary Search Tree](https://github.com/illuz/leetcode/tree/master/solutions/099.Recover_Binary_Search_Tree) 用到的 Threaded binary tree），然而并不行，因为这题的目的是反转。

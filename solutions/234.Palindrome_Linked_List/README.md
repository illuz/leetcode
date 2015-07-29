## 234. Palindrome Linked List (Easy)

### **链接**：
题目：https://leetcode.com/problems/palindrome-linked-list/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
判断一个单链表是否是回文。

### **分析**：

1. 最直接的做法是暴力去做，取第 i 个和 第 n-i 个对比，不过因为这是单链表，不能随机存取，这样的时间复杂是 O(n*2)
2. (Java) 如果转成数组不就能随机存取了？所以转数组做时间就可以缩减到 O(n)，不过要用到 O(n) 的空间
3. (C++) 回文问题正常都可以递归做的，可以试试用递归做看看，不过空间同样也要 O(n)
4. (C++) 如何做到 O(1) 的空间呢？可以转化一下，如果这是双链表，可以怎么做到 O(1)，只要两个指针，从中间向两边走就行了。然而单链表并不能往后走，那怎么办呢？Think for a while... 那让它可以往后走就行了，还记得 [092. Reverse Linked List II (Medium)](https://leetcode.com/problems/Reverse-Linked-List-II/) 这题吗。Think for a while... 没错，只要先将前一半反转，然后两个指针从头部和中间开始向前比较就行了，事后再转回来，时间复杂度是 O(n)，空间是 O(1)。

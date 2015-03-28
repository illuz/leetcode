## 138  Copy List with Random Pointer

### **链接**：
题目：https://leetcode.com/problems/copy-list-with-random-pointer/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
求一个链表的完全复制。

### **分析**：

刚开始想，每个节点两个指针，这不跟二叉树一样吗？但是太天真，树是没有环的，这个又没说有没有环，有环也是合法的。  

1. **(Python)**深复制不是很难，只要把 `<label, newNode>` 都保存下来，要用的时候拿来用就可以了。不过这要花上 O(n) 的空间，不是很值。（用 Python 可以用 `collections.defaultdict` 一气呵成）
2. **(C++)** 递归 + Hash 节点，不过不仅要用到 O(n) 的 Hash 空间，还要有栈的花费，还不知道会不会太深爆栈，不是很好的解。
3. **(Java)** 不会 O(1) space 解法 QAQ，Discuss 里倒是有不少自称 O(1) space，其实都是用了 O(n) space 的。不过思路是不错，就是在每个旧节点后面插一个新节点，再复制一遍，再去掉旧节点，共三次遍历。（这里用的是 Java，所以去掉旧节点时不用特地去释放旧节点，因为有 GC 机制，不过用的 C/C++ 时，最好手动去 release，不然内存泄露）

(1) 空间的解法请不要吝啬来教我。</s>  
Discuss 上的人说，这个题目要完全复制，所以至少要 O(n) 的空间来放节点，所以可以不去考虑节点的空间。  
这样一来，1，2 的解法还是 O(n) 空间，因为要用到 hash 表，不过 3 的解法就是 O(1) 没错了。  


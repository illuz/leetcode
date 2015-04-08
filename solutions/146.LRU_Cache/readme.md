## 149. LRU Cache (Hard)

### **链接**：
题目：https://leetcode.com/problems/lru-cache/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
实现一个 LRU 缓冲区的类。

### **分析**：

LRU 不难理解，问题是要怎么高效地去实现它。  
LRU 会有频繁的读改操作，所以要有合适的数据结构来让 set 和 get 的复杂度很小，最好近 O(1)。  
已经有人讨论过这个问题了：[What is the best way to Implement a LRU Cache? - Quora](http://www.quora.com/What-is-the-best-way-to-Implement-a-LRU-Cache)。  

1. 用 Splay 实现，Splay 是棵 BST，同时在查找和修改的时候会让那个节点上浮到根节点，不过操作都是 O(log(n)) 级别的，而且有个问题，就是这棵树可能会变成一条链（正常节点都是按查询频率从上到下，所以很快，均摊小于 O(log(n))）。Splay 太麻烦，这里就不给出。
2. 用双链表和 HashMap 实现，链表的作用是记录节点的使用顺序。正常情况下 LRU 都是用这种做法的。
    1. HashMap 实现用 key 找到 List 中的节点对象（C++ 中就是迭代器了），找不到就在 List 中增加节点，并插入 HashMap。
    2. 按照要求得到或修改节点的 value。
    3. 修改节点的使用时间，也就是把 List 中的节点拉到 List 头部。
    4. 在第一步时如果节点个数大于可用容量，就将 List 的最后一个节点删去。  

用 Python 的 OrderedDict 可以一下将 HashMap 和 List 都实现。


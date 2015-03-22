## 028. Implement strStr() (Easy)

### **链接**：
题目：https://leetcode.com/problems/implement-strstr/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
在一个字符串里找另一个字符串在其中的位置。  

### **分析**：
这题归在 Easy 类是因为它 O(n*n) 的暴力能过。  
如果数据强点就得 Midium 以上了。  

1. **(C++)** 这题的暴力 O(n^2) 就是两遍 for 去找  
2. **(C++)** 还有各种高大上的算法，比如 [KMP 算法](http://en.wikipedia.org/wiki/Knuth-Morris-Pratt_algorithm)，这是经典的了  
3. **(Python)** 另外可以用 hash 去做，叫 rolling hash 算法（见 [Wiki](http://en.wikipedia.org/wiki/Rolling_hash) 和 [StackOverflow](http://stackoverflow.com/questions/711770/fast-implementation-of-rolling-hash)），就是把字符串 hash 出来，按匹配串长度窗口去滚动，再去匹配。hash 字符串有很多种方法，这边的字母好像都是小写，有 26 个，所以就用 29 做基数（本来想像 djb2 算法用 33 做基数，可以直接 `((hash << 5) + hash)` 很快，不过 int 范围只能 hash 6 个字母而且 rolling 的时候还是要 `/33`，还是用 29 算了），超 int 范围的话用 Python 就不用考虑这个问题了。  

其他还有 Boyer–Moore，Rabin–Karp 算法，具体自己去搜。  

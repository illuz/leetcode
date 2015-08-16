## 258. Add Digits (Easy)

### **链接**：
题目：https://leetcode.com/problems/add-digits/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

用一个规则求一个数：38 -> 3+8=11 -> 1+1=2，结果是 2。
问能不能不用递归或迭代 O(1) 算出来。

### **分析**：

模拟很快。不过要 O(1) 算出来要想想了。  
1 的结果是 1，2->2....9->9, 10->1, 11->2....18->9,19->1....27->9,28->1....  
是不是有点头绪了，没错，结果都是有规律的，到 9\18\27... 的时候会进一变成 1。  
所以这样就容易了，答案是 (n-1)%9+1。  
这是数论中的数根，感兴趣可以看 [Digital root - Wikipedia](https://en.wikipedia.org/wiki/Digital_root#Congruence_formula) 和 [A010888 - OEIS](https://oeis.org/A010888)。  

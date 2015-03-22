## 030. Substring with Concatenation of All Words (Hard)  
  
### **链接**：  
题目：https://leetcode.com/problems/substring-with-concatenation-of-all-words/    
代码(github)：https://github.com/illuz/leetcode  
  
### **题意**：  
给一个字符串 S 和一个单词列表，单词长度都一样，找出所有 S 的子串，子串由所有单词组成，返回子串的起始位置。  
  
### **分析**：  
  
很明显每个子串都是由所有单词组成的，长度是一定的，所以直接枚举子串，切分后再用 map 进行判断就行了。  
  
这样的算法复杂度是 O(n*m)，其实还有几种很酷的 O(n) 的算法：  
  
1. 跟[「076. Minimum Window Substring (Hard)」](https://github.com/illuz/leetcode/blob/master/solutions/079.Word_Search) 一样的思路，就是维护两个指针，分别为前后区间，和一个 map，跑前面的指针看看当前区间能不能恰好匹配，行的话就得到答案了。  
2. 还有个用神奇的 `map<string, queue>` 来做，其实原理是跟 1 是一样的，具体见：[code with HashTable with Queue for O(n) runtime](https://leetcode.com/discuss/21598/my-c-code-with-hashtable-with-queue-for-runtime-71ms-runtime)  
3. 这其实只是一个优化，在匹配时使用 Trie 匹配，具体见：[Accepted recursive solution using Trie Tree](https://leetcode.com/discuss/20055/accepted-recursive-solution-using-trie-tree)  
  
这里用 C++ 实现了 O(n*m) 算法，用 Java 实现了 1 算法。  

## 096. Unique Binary Search Trees (Medium)  
  
### **链接**：  
题目：https://leetcode.com/problems/unique-binary-search-trees/  
代码(github)：https://github.com/illuz/leetcode  
  
### **题意**：  
求 {1, 2, ..., n} 的 BST 个数。  
  
### **分析**：  
  
DP 公式为：  
`dp[i] = dp[k] * dp[i-k-1] { 0<=k<=i-1 }`  
可以这样理解：  
求 {1, 2, ...., i} 的 BST，我们拿其中的一个数作根（假设为 k），根据 BST 的特性，左子树就是 {1, 2, ..., k-1}，右子树就是 {k+1, k+2, ..., i} 了。  
而很明显 {k+1, k+2, ..., i} 化 BST 的可能性和 {1, 2, ..., i-(k+1)} 是一样的。  
记 {1, 2, ..., n} 的 BST 个数为 f(n)，上述就可以表达为 `f(i) = f(k-1) * f(i-k-1)`。  
而我们选择的 k 就是 {1, 2, ...., i} 中的任意一个，而不同的 k 等到的 BST 是不会重复的。  

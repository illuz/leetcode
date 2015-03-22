## 087. Scramble String (Hard)  
  
### **链接**：  
题目：https://leetcode.com/problems/scramble-string/  
代码(github)：https://github.com/illuz/leetcode  
  
### **题意**：  
  
一个字符串递归分成一棵树：  
  
```
    great
   /    \
  gr    eat
 / \    /  \
g   r  e   a 
           / \
          a   t
```
  
一个 scramble 操作就是将一个非叶子节点的子节点翻转。  
下面是将 `gr` 节点翻转的结果：  
  
```
    rgeat
   /    \
  rg    eat
 / \    /  \
r   g  e   at
           / \
          a   t
```
  
当然你可以对多个节点进行翻转。  
  
现在给出俩字符串，问 s1 能否通过 scramble 操作后得到 s2。  
  
### **分析**：  
  
1. (**C++**)暴力递归必然超时，复杂度是 O(3^n)。  
2. (**C++**)在 1 的基础上进行记忆化，开三维数组来存： `dp[i][j][len]` 表示 `s1[i~(i+len)]` 和 `s2[j~(j+len)]` 是否能匹配。复杂度是 O(n^4)。（这里的复杂度网上很多博客都写错了，数组中每个数会算一次，也就是会进入函数一次，函数里会 for 一遍 (length-1) 次，所以复杂度是 O(n^4)）。  
3. (**C++\Java**)在 1 的基础上进行剪枝，每次判断两个字符是否字母个数一样，这样就可以过了。（这个解法用 Java 的 `Arrays.sort` 和 `Arrays.equals` 来做很爽）  
4. (**Python**)能用记忆化搜索做，那肯定可以用 DP 做了，复杂度一样是 O(n^4)，从记忆化搜索做法中的 if 条件中可以看出转移式： `f[n][i][j] =  (f[k][i][j] && f[n-k][i+k][j+k]) || (f[k][i][j+n-k] && f[n-k][i+k][j])` 。  
  

## 085. Maximal Rectangle (Hard)  
  
### **链接**：  
题目：https://leetcode.com/problems/maximal-rectangle/  
代码(github)：https://github.com/illuz/leetcode  
  
### **题意**：  
求一个 01 矩阵的全是 1 的子矩阵的最大规模。  
  
### **分析**：  
  
很有挑战性的题目。  
一眼看过去就感觉要用 DP 做，可是从前个位置的答案和当前位置的行列延伸值的转移无法保持最优性。  
  
看了下 discuss，发现提到了上一题 [084. Largest Rectangle in Histogram (Hard)](https://github.com/illuz/leetcode/tree/master/solutions/084.Largest_Rectangle_in_Histogram)，想了下，简直机智得不得了！  
我们可以转化为：求矩阵前 x 行，以第 x 行为底的最大矩形，这不就直接是上一题了吗。  
Largest Rectangle in Histogram 的复杂度是 O(n)，所以这题的复杂度是 O(n^2)，矩阵条（直方图）的处理可以用 O(n) 的空间来搞定。  
  
Largest Rectangle in Histogram 我写了两 AC 的算法，一个用 stack 的是 O(n)，一个暴力加优化的 O(n^2)，这题直接用上题的函数，都过了 = =b。  

（这里不得不提下 Discuss 上的一个[数组 DP 的算法](DP solution)，其实它的思想跟直方图很像的）

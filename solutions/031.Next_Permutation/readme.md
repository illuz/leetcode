## 031. Next Permutation (Medium)  
  
### **链接**：  
题目：https://oj.leetcode.com/problems/next-permutation/  
代码(github)：https://github.com/illuz/leetcode  
  
### **题意**：  
求一个序列的下一个排列。  
  
### **分析**：  
  
可以用 STL 里的 'next_permutation' 偷懒。  
  
具体算法是：  
  
> 首先，从最尾端开始往前寻找两个相邻的元素，令第一个元素是 i，第二个元素是 ii，且满足 `i<ii` ；  
> 然后，再从最尾端开始往前搜索，找出第一个大于 i 的元素，设其为 j；  
> 然后，将 i 和 j 对调，再将 ii 及其后面的所有元素反转。  
  

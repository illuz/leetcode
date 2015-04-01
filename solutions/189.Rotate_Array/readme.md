## 189. Rotate Array (Easy)

### **链接**：
题目：https://leetcode.com/problems/rotate-array/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

把一个数组左旋转 k 步。如 `[1,2,3,4,5,6,7]` is rotated to `[5,6,7,1,2,3,4]`。

### **分析**：

这题很容易，模拟一下就能出来了。  
不过如果要用 O(1) 的空间就要想想了。  
把 `[0, n-k-1]` 和 `[n-k,n-1]` 看成一个单词，这样就和 [151 Reverse Words in a String](https://github.com/illuz/leetcode/tree/master/solutions/151.Reverse_Words_in_a_String) 一样可以 O(1) 的空间完成了。


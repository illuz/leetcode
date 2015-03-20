## 148. Sort List (Medium)

### **链接**：
题目：https://leetcode.com/problems/sort-list/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
给链表排序，只能用 O(nlogn) 时间和 O(1) 空间。

### **分析**：

把排序算法筛选一遍吧：  
非比较排序如桶排和计数排序需要不少的空间，pass。  
冒泡复杂度不够，pass。  
插入排序可以用二分实现 O(nlogn)，但没辅助空间，链表无法实现随机存取，pass。  
堆排也要堆做辅助空间，拿原链表做堆也不成，链表不好实现堆，pass。  
快排要递归，要用最坏的 O(n) 栈空间，pass。  
分治好像很靠谱，不过也要递归，要 O(logn) 栈空间，pass。  

没算法了...  
不，分治已经很靠谱了，如果能变成非递归的版本就可以了。  
你还记得当年 [143. Reorder List](https://leetcode.com/problems/Reorder-List/) 的 merge 递归转非递归吗？  
没错，用这思路就可以了。  

这里引用[大神的解释](https://leetcode.com/discuss/10264/my-o-n-log-n-time-o-1-space-solution)下：  

> Round #1 block_size = 1
> (a1, a2), (a3, a4), (a5, a6), (a7, a8)
> Compare a1 with a2, a3 with a4 ...
> Round #2 block_size = 2
> (a1, a2, a3, a4), (a5, a6, a7, a8)
> merge two sorted arrays (a1, a2) and (a3, a4), then merge tow sorted arrays(a5, a6) and (a7, a8)
> Round #3 block_size = 4
> (a1, a2, a3, a4, a5, a6, a7, a8)
> merge two sorted arrays (a1, a2, a3, a4), and (a5, a6, a7, a8)

PS：这题的 Python 用 O(1) 去做很难过的，见 [Anyone solve this in Python](https://leetcode.com/discuss/3344/anyone-solve-this-in-python)

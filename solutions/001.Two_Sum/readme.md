## 001.Two_Sum (Medium)  
  
### **链接**：  
题目：https://oj.leetcode.com/problems/two-sum/  
代码(github)：https://github.com/illuz/leetcode  
  
### **题意**：  
一个数组中两个位置上的数的和恰为 target，求这两个位置。  
  
### **分析**：  
暴力找过去复杂度是 O(n^2)，会 TLE。  
  
1. 可以先排序再用双指针向中间夹逼，复杂度 O(nlogn)。  
2. 可以用 Map 记录出现的数，只要判断有没有和当前的数凑成 target 的数，再找出来就行，复杂度 O(nlogn) 而不是 O(n) ，因为 Map 也要复杂度的。  
3. 在 2 中的 Map 复杂度可以用数组来弥补，时间复杂度是 O(n) ，不过空间复杂度是 O(MAXN)。  
  
---  
  
** (English Version) **  
  
## 001.Two_Sum (Medium)  
  
### **Link**:  
Problem: https://oj.leetcode.com/problems/two-sum/  
Newest solutions in my Github: https://github.com/illuz/leetcode  
  
### **Analysis**：  
Brute-force finding will get TLE, because the time complexity is high O(n^2).  
  
1. Sort and use two pointers  
2. Use a hashmap (map in C++, HashMap in Java, dict in Python) to store the numbers. Then we can only find out the number which is (target - current_number) in the hashmap. The time complexity is O(nlogn). (NOT O(n), because the hashmap operator will cost time)  
3. We can use array to implement the hashmap in 2. Then the hashmap operator cost O(1) and the total time is O(n). But the array will cost O(MAXNUM) space.  
  

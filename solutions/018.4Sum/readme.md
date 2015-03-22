## 018.4Sum (Medium)

### **链接**：
题目：https://leetcode.com/problems/4sum/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
给一个数列 S ,找出四个数 a,b,c,d 使得`a + b + c + d = target`。

### **分析**：

1. 跟之前的 2Sum, 3Sum 和 3Sum Closest 一样的做法，先排序，再左右夹逼，复杂度 O(n^3)。不过用 Python 可能会被卡超时。  
2. 先求出每两个数的和，放到 `HashSet` 里，再利用之前的 2Sum 去求。这种算法比较快，复杂度 O(n*n*log(n))，不过细节要处理的不少。  
 
这里 C++ 用的是算法1， Java, Python 用的是 2。  
这题 Java 可以好好地学学 `HashMap` 的使用， Python 可以学习 `set`, `collection` 和 `itertools` 的一些用法。  

## 076. Minimum Window Substring (Hard)

### **链接**：
题目：https://leetcode.com/problems/minimum-window-substring/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
给一个原字符串 S，和一个匹配串 T，求 S 最小的子串（窗口）包含全部 T 的字符。  

### **分析**：
跟 '030.Substring_with_Concatenation_of_All_Words' 很像，思路和做法是一样的。  
用快慢指针，快指针跑到匹配的位置，再向前缩慢指针。  
计算匹配可以利用 Hash 来计算有效的字母，Hash 可以用 HashMap(Java)，unordered_map(C++)，也可以直接用数组。用数组会比较快。  

这里 Java 和 Python 的写法和 C++ 的基本一样，就不给出了。  

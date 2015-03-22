  
## 003.Longest_Substring_Without_Repeating_Characters  
  
### **链接**：  
题目：https://leetcode.com/problems/Longest-Substring-Without-Repeating-Characters/  
代码(github)：https://github.com/illuz/leetcode  
  
### **题意**：  
从标题就可以知道题意了，是求一个字符串中最长的不含重复字符的子串。  
  
### **分析**：  
开一个数组记录当前字符最近出现的位置，一遍算过去，更新左边界，用它计算最大值就行了。  
需要花费常数的空间。  
  
  
---  
  
**(English version)**  
  
  
## 003.Longest_Substring_Without_Repeating_Characters  
  
  
**Link**:  
Problem: https://leetcode.com/problems/Longest-Substring-Without-Repeating-Characters/  
Newest solutions in my Github: https://github.com/illuz/leetcode  
  
**Analysis**：  
Generate an array to record the last position of current character.  
Count and update the left bound, and calculate the maximum.  
It will just cost constant space.  

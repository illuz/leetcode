## 020.Valid_Parentheses (Easy)

### **链接**：
题目：https://oj.leetcode.com/problems/valid-parentheses/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
判断一个括号字符串是否是有效的。

### **分析**：
直接用栈模拟，很简单的。  
Java 的括号匹配可以用 if 写，也可以用 `HashMap<Character, Character>` 存，还可以用 `"(){}[]".indexOf(s.substring(i, i + 1)`。 （这个讨论也可以用于 C++ 和 Python）  

这里的 C++ 是用 if 匹配， Java 用 indexOf， Python 用 dict。

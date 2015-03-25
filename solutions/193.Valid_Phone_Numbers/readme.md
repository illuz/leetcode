## 193. Valid Phone Numbers (Easy)

### **链接**：
题目：https://leetcode.com/problems/valid-phone-numbers/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
用 Shell Script 输出 `(xxx) xxx-xxxx` or `xxx-xxx-xxxx` 格式的号码。

### **分析**：

这题考察的是正则表达式。  
可惜我写的正则是很挫的。  

1. 用 sed 做：`sed -n '/expression/p'`
2. 用 grep 做：`grep 'expression'`
3. 用 egrep 做：`egrep 'expression'`，egrep 的正则和 grep 的不太一样。
4. 用 awk 做：`awk '/expression/ {print}`，awk 的匹配式不太支持正则表达式，比较难用。

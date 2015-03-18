## 151. Reverse Words in a String (Medium)

### **链接**：
题目：https://leetcode.com/problems/reverse-words-in-a-string/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
反转句子里的单词。

### **分析**：

1. **(C++)** 用 stringstream 可以很方便求出来，不过空间还是用得不少。时间复杂度 O(n)，空间 O(n)。
2. **(Java)** 用 `String` 的 `trim` 和 `split` 分成字符串数组，再处理
3. **(Python)** 一句话就行了。
4. **(C)** 如何达到 O(1) 空间？这才是这题真正考察的地方。其实只要反转每个单词，最后再反转整个句子就行了。时间复杂度同样是 O(n)。

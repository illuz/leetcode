## 192. Word Frequency (Medium)

### **链接**：
题目：https://leetcode.com/problems/word-frequency/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
统计 word.txt 里的单词和频数，然后按频数从小到大排序输出。

### **分析**：

1. 用 `awk` 统计单词个数。
    - 用 `awk` 里的字典，循环统计每一行的第个单词。
    - 处理完全部行后，再用`for (item in Dict) { #do someting# }` 把单词和频数输出来。
2. 不过现在只是做好了统计，还要排序下。用管道 `|` 把输出交给 `sort` 来排序
    - `sort -n` 把字符串转成数来比较。
    - `sort -r` 从小到大。
    - `sort -k 2` 把第二个字串当做 key。

---

English version:

1. I should count the words. So I chose the `awk` command.
  - I use a dictionary in `awk`. For every line I count every word in the dictionary.
  - After deal with all lines. At the `END`, use `for (item in Dict) { #do someting# } ` to print every words and its frequency.
2. Now the printed words are unsorted. Then I use a `|` pipes and sort it by `sort`
  - `sort -n` means "compare according to string numerical value".
  - `sort -r` means "reverse the result of comparisons".
  - `sort -k 2` means "sort by the second word"

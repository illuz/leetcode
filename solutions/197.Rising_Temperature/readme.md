## 197  Rising Temperature Easy

### **链接**：
题目：https://leetcode.com/problems/rising-temperature/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

1. 这题可以连接两个表来做，Date 类型的比较用 `TO_DAYS()` 来实现。
2. 如果先排序再用 `CASE-WHEN` 来做也可以，不过不知道怎么搞的，MySQL 的 `:=` 符号的优先级居然比 `AND\OR` 来得低，DEBUG 了半天才找到这个问题，郁闷。这样做快多了，速度跻身前列。


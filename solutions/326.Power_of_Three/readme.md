## 326. Power of Three (Easy)



### **链接**：

题目：https://leetcode.com/problems/power-of-three/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：

判断一个数是否是 3 的次方数。

### **分析**：

1. 最普通的做法：用 3 一次一次除，能除尽就是了。
2. 用 log 去做，中学数学题，`x=log3(y)=(log2(y)/log2(3))`，然后判断 x 是不是整数就行了。（考察点：浮点数的计算）
3. tricky 的做法，因为参数是 int 类型的，所以 3 的次方就那么几个，先全算出来。
4. 也是 tricky 的做法，直接判断能不能被 1162261467 整除，1162261467 是 int 内最大的 (3^x) 数，也就是说它的因子都是 3，能被它整除的数就一定也是 (3^x) 数。



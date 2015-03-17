## 134. Gas Station (Medium)

### **链接**：
题目：https://leetcode.com/problems/gas-station/  
代码(github)：https://github.com/illuz/leetcode

### **题意**：
提供数组 gas、cost，gas表示第i个点的汽油量，cost表示从i到i+1所需的汽油量，问是否有一点，出发能驶过所有点(路径是环)。

### **分析**：

1. 暴力枚举每个点，走一遍。复杂度是 O(n^2)，不理想。
2. 考虑从 i 点出发，只能走到 j 点，其原因是从 i 到 j 积累的汽油量 `sum_gas[i~j]` 不够从 j 到 j+1 的费用 `cost[j]`，因为 gas，cost 都是非负的，所以即使从 [i,j] 中的一个点出发，积累的汽油量也不会大于 `sum_gas[i~j]` 的，所以从 [i,j] 出发是徒劳的，一旦走失败了，就可以跳过 [i,j] 从 j+1 开始，这样就可以很大的优化了。复杂度是 O(n)。

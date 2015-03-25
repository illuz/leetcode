# Write your MySQL query statement below
# !! This solution may be wrong when the id is not successive.
SELECT DISTINCT t1.Num
FROM Logs t1 JOIN Logs t2 ON t1.Num = t2.Num
    JOIN Logs t3 ON t1.Num = t3.Num
WHERE t1.Id = t2.Id + 1 AND t2.Id = t3.Id + 1

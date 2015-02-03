# Write your MySQL query statement below
SELECT DISTINCT a.Email
FROM Person a JOIN Person b
WHERE a.Email = b.Email AND a.id <> b.id

SELECT A.Name Employee
FROM Employee A, Employee B
WHERE A.ManagerId = B.Id AND A.Salary > B.Salary

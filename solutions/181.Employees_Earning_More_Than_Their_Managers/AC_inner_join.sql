SELECT A.Name Employee
FROM Employee A INNER JOIN Employee B
ON A.ManagerId = B.Id
WHERE A.Salary > B.Salary

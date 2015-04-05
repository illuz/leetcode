SELECT d.Name Department, e.Name Employee, Salary
FROM Employee e, Department d
WHERE e.DepartmentId = d.Id AND e.Salary = (
    SELECT MAX(Salary)
    FROM Employee
    WHERE DepartmentId = d.Id
)

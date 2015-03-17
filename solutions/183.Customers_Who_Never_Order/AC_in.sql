SELECT Name Customers
FROM Customers A
WHERE A.Id NOT IN (
    SELECT B.CustomerId
    FROM Orders B
)

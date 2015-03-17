SELECT Name Customers
FROM Customers A
WHERE NOT EXISTS (
    SELECT 1
    FROM Orders B
    WHERE A.Id = B.CustomerId
)

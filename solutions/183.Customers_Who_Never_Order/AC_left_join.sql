SELECT Name Customers
FROM Customers a LEFT JOIN Orders b ON a.Id = b.CustomerId
WHERE CustomerId is NULL

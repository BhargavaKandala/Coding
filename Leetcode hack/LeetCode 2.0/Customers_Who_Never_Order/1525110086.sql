# Write your MySQL query statement below
SELECT c.name AS Customers
FROM Customers c LEFT JOIN Orders o
ON c.id = o.CustomerID
WHERE o.id IS NULL
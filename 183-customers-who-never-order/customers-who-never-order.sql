# Write your MySQL query statement below
SELECT name AS customers
From customers
WHERE id NOT IN (SELECT customerId FROM Orders);
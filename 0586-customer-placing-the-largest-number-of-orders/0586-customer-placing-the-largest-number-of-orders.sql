# Write your MySQL query statement below
SELECT customer_number
From Orders
GROUP By customer_number
Order by count(order_number) desc
limit 1;
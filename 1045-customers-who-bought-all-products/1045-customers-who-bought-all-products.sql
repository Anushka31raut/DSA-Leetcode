# Write your MySQL query statement below
SELECT c.customer_id
FROM Customer c
group by customer_id
having count(distinct product_key) = (select count(*) from Product );
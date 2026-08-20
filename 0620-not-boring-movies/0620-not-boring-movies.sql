# Write your MySQL query statement below
SELECT * From Cinema
WHERE id % 2 =1 
    AND description <> 'boring'
Order by rating desc;
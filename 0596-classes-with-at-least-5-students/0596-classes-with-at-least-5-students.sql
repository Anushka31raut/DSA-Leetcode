# Write your MySQL query statement below
SELECT class
From Courses
group by class
having count(student) >= 5;
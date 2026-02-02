-- Write your PostgreSQL query statement below
select name as Employee
from Employee A
where salary > (
    select salary
    from Employee B
    where A.managerId = B.id
)

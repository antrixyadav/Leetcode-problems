# Write your MySQL query statement below
select employee_id, 
    case
        when employee_id%2=0 then 0
        when employee_id%2=1 and name like "M%" then 0
        else salary
        end as bonus
from employees
order by employee_id;

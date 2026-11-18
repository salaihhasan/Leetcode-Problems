-- Write your PostgreSQL query statement below
select 
    teacher_id,
    count(Distinct subject_id) As cnt
from 
    Teacher 
group by teacher_id;
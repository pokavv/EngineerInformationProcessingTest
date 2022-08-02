col1(2, 4, 5, 6, Null)
col2(Null, 5, 6,  3, 3)

select count(col2)
from col1, col2
where col1 in(2, 3) or col2 in (3, 5)
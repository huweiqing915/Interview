SELECT * FROM A INNER JOIN B on A.name = B.name

SELECT Customer, SUM(OrderPrice) FROM Orders GROUP BY Customer;

SELECT Customer, SUM(OrderPrice) FROM Orders GROUP BY Customer HAVING SUM(OrderPrice) < 2000

Student:sid,  name,  age
Class:  cid,  name
StudentClass: sid,  cid
查询年龄>20的学生的名字
查询每个班级的学生的数量
查询学生数量>30的班级的名字
查询Tom所在班级的学生的数量

SELECT name from Student where age > 20;

SELECT C.name, S.StudentNo from Class C,
(SELECT COUNT(name) AS StudentNo from StudentClass GROUP BY cid) S where C.cid=S.cid;

SELECT C.name from Class C,
(SELECT COUNT(name) AS StudentNo from StudentClass GROUP BY cid) S where C.cid=S.cid and S.StudentNo > 30

SELECT COUNT(sid) from StudentClass group by cid having StudentClass.cid in
(select StudentClass.cid from Student, StudentClass where Student.name='Tom' and Student.sid=StudentClass.sid) 
SELECT cid from StudentClass where (SELECT sid from Student where name='Tom') S 

Answer:
select count(sid) from StudentClass group by cid 
having StudentClass.cid in (select StudentClass.cid from Student, StudentClass 
	where Student.name="Tom" and Student.sid=StudentClass.sid)

SELECT name, age from Student where age > 20;

SELECT C.name, S.num from Class C,  
(SELECT cid, count(sid) num FROM StudentClass Group By cid) S where C.cid=S.cid

select C.name, S.num from Class C,  
(SELECT cid, count(sid) num FROM StudentClass Group By cid) S where C.cid=S.cid and S.num > 30


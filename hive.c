Hive>create database mydb;
Hive>show databases;
Hive>use mydb;
Syntax:
CREATE TABLE  table_name

(col_name data_type)
[ROW FORMAT row_format]


Create table with following structure

Sr No	Field Name 	Data Type
1	Eid	Int
2	Name	String
3	Salary	Float
4	Designation	String

Hive>CREATE TABLE
employee ( eid int, name String,
> salary float, designation String)
> ROW FORMAT DELIMITED
> FIELDS TERMINATED BY ‘\t’;


ROW FORMAT should have delimiters used to terminate the fields and lines.

>describe employee;
>describe extended employee;
Alter Table
ALTER TABLE name RENAME TO new_name
ALTER TABLE name ADD COLUMNS (col_spec[, col_spec ...])
ALTER TABLE name DROP [COLUMN] column_name
ALTER TABLE name CHANGE column_name new_name new_type
ALTER TABLE name REPLACE COLUMNS (col_spec[,col_spec ...])

2.	Alter table name to emp
3.	Add Column deptno having int data type.
4.	Change fileld ‘name’ to ‘ename’. 

Insert or LOAD
To load data from HDFS to hive using the following command:

LOAD DATA INPATH '/test’ INTO TABLE emp

(test is folder in hdfs which contains emp file)
To load data from local file system to hive using the following command:

LOAD DATA LOCAL INPATH ‘home/aas/emp_local’ INTO TABLE emp


5.	Load data from textfile present in local file system.
6.	Count employees for each dept. Use Group by clause.
7.	Display only those departments in which more than 2 employees are present.
JOINS-
8.	Create Dept table (deptno int, dname string,location string)
9.	Insert or Load few records in Dept table.
10.	Perform Join, Left outer join, Right Outer join on emp and dept table.
11.	Create index index_name ON Table tablename(column_name)
12.	Show the first two records from the emp table (Use Limit keyword)
13.	Storing the results in a table for future use
Create table tb_name as select count(*) from emp;

14.	Create External table.
15.	Load or insert few records.
16.	Drop External table and understand difference between Internal & External Table.

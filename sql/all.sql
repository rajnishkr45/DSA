# SQL Interview Preparation Guide (Beginner → Advanced)

---

## 🔹 1. Create Table

```sql
CREATE TABLE employees (
    id INT PRIMARY KEY,
    name VARCHAR(50),
    salary INT,
    department VARCHAR(50),
    joining_date DATE
);
```

👉 Creates a table with columns and data types.

---

## 🔹 2. Insert Data

```sql
INSERT INTO employees VALUES (1, 'Rajnish', 50000, 'IT', '2024-01-10');
```

👉 Adds a record into table.

---

## 🔹 3. Select Data

```sql
SELECT * FROM employees;
```

👉 Fetch all records.

```sql
SELECT name, salary FROM employees;
```

👉 Fetch specific columns.

---

## 🔹 4. WHERE Clause

```sql
SELECT * FROM employees WHERE salary > 40000;
```

👉 Filters data.

---

## 🔹 5. ORDER BY

```sql
SELECT * FROM employees ORDER BY salary DESC;
```

👉 Sort data.

---

## 🔹 6. GROUP BY

```sql
SELECT department, COUNT(*) FROM employees GROUP BY department;
```

👉 Groups rows.

---

## 🔹 7. HAVING

```sql
SELECT department, COUNT(*) FROM employees GROUP BY department HAVING COUNT(*) > 2;
```

👉 Filter after grouping.

---

## 🔹 8. UPDATE

```sql
UPDATE employees SET salary = 60000 WHERE id = 1;
```

👉 Modify data.

---

## 🔹 9. DELETE

```sql
DELETE FROM employees WHERE id = 1;
```

👉 Remove data.

---

## 🔹 10. JOINS

### INNER JOIN

```sql
SELECT e.name, d.dept_name
FROM employees e
INNER JOIN department d ON e.department = d.dept_name;
```

### LEFT JOIN

```sql
SELECT e.name, d.dept_name
FROM employees e
LEFT JOIN department d ON e.department = d.dept_name;
```

### RIGHT JOIN

```sql
SELECT e.name, d.dept_name
FROM employees e
RIGHT JOIN department d ON e.department = d.dept_name;
```

---

## 🔹 11. Subquery

```sql
SELECT name FROM employees WHERE salary > (SELECT AVG(salary) FROM employees);
```

👉 Query inside query.

---

## 🔹 12. Aggregate Functions

```sql
SELECT MAX(salary), MIN(salary), AVG(salary), SUM(salary)
FROM employees;
```

👉 Perform calculations.

---

## 🔹 13. DISTINCT

```sql
SELECT DISTINCT department FROM employees;
```

👉 Remove duplicates.

---

## 🔹 14. LIMIT

```sql
SELECT * FROM employees LIMIT 3;
```

👉 Restrict output.

---

## 🔹 15. Nth Highest Salary

### 2nd Highest

```sql
SELECT MAX(salary) FROM employees
WHERE salary < (SELECT MAX(salary) FROM employees);
```

### 3rd Highest

```sql
SELECT salary FROM employees
ORDER BY salary DESC LIMIT 1 OFFSET 2;
```

---

## 🔹 16. Window Functions

```sql
SELECT name, salary,
RANK() OVER (ORDER BY salary DESC) AS rank
FROM employees;
```

👉 Ranking without grouping.

---

## 🔹 17. Constraints

```sql
CREATE TABLE test (
    id INT PRIMARY KEY,
    email VARCHAR(100) UNIQUE,
    age INT CHECK (age >= 18)
);
```

👉 Rules on data.

---

## 🔹 18. Views

```sql
CREATE VIEW high_salary AS
SELECT name, salary FROM employees WHERE salary > 50000;
```

👉 Virtual table.

---

## 🔹 19. Index

```sql
CREATE INDEX idx_salary ON employees(salary);
```

👉 Improves search performance.

---

## 🔹 20. Date Functions

```sql
SELECT CURRENT_DATE;
SELECT YEAR(joining_date) FROM employees;
```

👉 Work with dates.

---

# 🎯 Interview Tips

* WHERE → before grouping
* HAVING → after grouping
* JOIN → combine tables
* Subquery → nested query
* Index → performance improvement

---

# 💥 Must Practice Questions

1. Find 2nd highest salary
2. Find duplicate records
3. Delete duplicate rows
4. Get employees with highest salary in each department
5. Difference between WHERE and HAVING

---

This guide covers most SQL interview questions asked in companies like TCS, Infosys, Wipro, and pro

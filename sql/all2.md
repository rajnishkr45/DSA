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

👉 **Use:** Creates a structured table to store employee data. Used at the beginning when designing a database.

---

## 🔹 2. Insert Data

```sql
INSERT INTO employees VALUES (1, 'Rajnish', 50000, 'IT', '2024-01-10');
```

👉 **Use:** Adds new records into the table. Used whenever new data needs to be stored.

---

## 🔹 3. Select Data

```sql
SELECT * FROM employees;
```

👉 **Use:** Retrieves all data from the table.

```sql
SELECT name, salary FROM employees;
```

👉 **Use:** Fetch only required columns to reduce unnecessary data.

---

## 🔹 4. WHERE Clause

```sql
SELECT * FROM employees WHERE salary > 40000;
```

👉 **Use:** Filters records based on conditions. Very commonly used in real-world queries.

---

## 🔹 5. ORDER BY

```sql
SELECT * FROM employees ORDER BY salary DESC;
```

👉 **Use:** Sorts data (ascending/descending). Used in reports and ranking.

---

## 🔹 6. GROUP BY

```sql
SELECT department, COUNT(*) FROM employees GROUP BY department;
```

👉 **Use:** Groups data to perform aggregation like count, sum, average per category.

---

## 🔹 7. HAVING

```sql
SELECT department, COUNT(*) FROM employees GROUP BY department HAVING COUNT(*) > 2;
```

👉 **Use:** Filters grouped data (used after GROUP BY). Important difference from WHERE.

---

## 🔹 8. UPDATE

```sql
UPDATE employees SET salary = 60000 WHERE id = 1;
```

👉 **Use:** Modify existing records. Used when updating data like salary changes.

---

## 🔹 9. DELETE

```sql
DELETE FROM employees WHERE id = 1;
```

👉 **Use:** Removes specific records from table.

---

## 🔹 10. JOINS

### INNER JOIN

```sql
SELECT e.name, d.dept_name
FROM employees e
INNER JOIN department d ON e.department = d.dept_name;
```

👉 **Use:** Returns only matching data from both tables.

### LEFT JOIN

```sql
SELECT e.name, d.dept_name
FROM employees e
LEFT JOIN department d ON e.department = d.dept_name;
```

👉 **Use:** Returns all records from left table and matched data from right.

### RIGHT JOIN

```sql
SELECT e.name, d.dept_name
FROM employees e
RIGHT JOIN department d ON e.department = d.dept_name;
```

👉 **Use:** Returns all records from right table and matched from left.

---

## 🔹 11. Subquery

```sql
SELECT name FROM employees WHERE salary > (SELECT AVG(salary) FROM employees);
```

👉 **Use:** Used when a query depends on result of another query.

---

## 🔹 12. Aggregate Functions

```sql
SELECT MAX(salary), MIN(salary), AVG(salary), SUM(salary)
FROM employees;
```

👉 **Use:** Perform calculations on data (very common in analytics and reports).

---

## 🔹 13. DISTINCT

```sql
SELECT DISTINCT department FROM employees;
```

👉 **Use:** Removes duplicate values from result.

---

## 🔹 14. LIMIT

```sql
SELECT * FROM employees LIMIT 3;
```

👉 **Use:** Restricts number of rows returned (useful in pagination).

---

## 🔹 15. Nth Highest Salary

### 2nd Highest

```sql
SELECT MAX(salary) FROM employees
WHERE salary < (SELECT MAX(salary) FROM employees);
```

👉 **Use:** Common interview question to find second highest salary.

### 3rd Highest

```sql
SELECT salary FROM employees
ORDER BY salary DESC LIMIT 1 OFFSET 2;
```

👉 **Use:** Used to fetch nth highest value using sorting.

---

## 🔹 16. Window Functions

```sql
SELECT name, salary,
RANK() OVER (ORDER BY salary DESC) AS rank
FROM employees;
```

👉 **Use:** Assign rank without grouping. Useful in leaderboards and analytics.

---

## 🔹 17. Constraints

```sql
CREATE TABLE test (
    id INT PRIMARY KEY,
    email VARCHAR(100) UNIQUE,
    age INT CHECK (age >= 18)
);
```

👉 **Use:** Ensures data integrity (no duplicates, valid values).

---

## 🔹 18. Views

```sql
CREATE VIEW high_salary AS
SELECT name, salary FROM employees WHERE salary > 50000;
```

👉 **Use:** Create virtual table for reusable queries.

---

## 🔹 19. Index

```sql
CREATE INDEX idx_salary ON employees(salary);
```

👉 **Use:** Improves query performance by speeding up searches.

---

## 🔹 20. Date Functions

```sql
SELECT CURRENT_DATE;
SELECT YEAR(joining_date) FROM employees;
```

👉 **Use:** Work with date/time data (very common in real-world apps).

---

# 🎯 Interview Tips

- WHERE → filter before grouping
- HAVING → filter after grouping
- JOIN → combine tables
- Subquery → dependent queries
- Index → improves performance

---

# 💥 Must Practice Questions

1. Find 2nd highest salary
2. Find duplicate records
3. Delete duplicate rows
4. Get employees with highest salary in each department
5. Difference between WHERE and HAVING

---

This guide now explains both **how the query works + where it is used in real scenarios**, which is exactly what interviewers expect.

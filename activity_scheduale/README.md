# 🗓 Activity Schedules

## 📜 Problem Statement

You are given **n** days and **3 different activities**:

* Swimming
* Running
* Football

You must schedule exactly one activity for each day such that **no two consecutive days have the same activity**.

Your task:

* Print all possible valid schedules.
* Print the **total count** of valid schedules.

---

## 💡 Formula for the Count

For `n >= 1`:


*COUNT* = 3 * 2^(n-1)


Reason:

* Day 1 → 3 choices.
* Every next day → 2 choices (different from previous day).

---

## 🖥 Example Run (n = 2)

**Input:**

```
2
```

**Output:**

```
Swimming Running  
Swimming Football  
Running Swimming  
Running Football  
Football Swimming  
Football Running  
COUNT: 6
```

**Explanation:**
For `n=2`:

``
3 * 2^{2-1} = 3 * 2 = 6
``

So there are exactly 6 valid schedules.

---

## 🧮 Additional Test Cases

| n | Expected Count | Formula Check         |
| - | -------------- | --------------------- |
| 1 | 3              | `3 * 2^{0} = 3`  |
| 2 | 6              | `3 * 2^{1} = 6`  |
| 3 | 12             | `3 * 2^{2} = 12` |
| 4 | 24             | `3 * 2^{3} = 24` |

---

## 👤 Author

* **Name:** Sarat Jabari
* **Email :** \[[saratjabari905@gmail.com](mailto:saratjabari905@gmail.com)]
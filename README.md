# ResultAnalysisSystem
Here's a sample **README.md** for your C program that manages student results across Semesters 1, 2, and First Year:

---

📘  Result Analysis System in C

📄 Description

This is a **C-based console application** that allows users (students) to:

* View their **Sem 1 results**
* View their **Sem 2 results**
* View combined **First Year results**
* Check **GPA and CGPA calculations**

The system includes:

* A predefined list of students (with roll numbers, names, and branches)
* Subject-wise marks entry and automated grade assignment
* GPA & CGPA calculations per semester and cumulatively

---

 🛠 Features

* 🔎 Student verification via Roll Number
* ✅ Grade assignment based on marks
* 📊 GPA & CGPA Calculation
* 🔄 Retry options on invalid inputs
* 🧮 Weighted GPA using credit-based system

---

🧮 Grade Scheme

| Marks Range | Grade | Grade Point |
| ----------- | ----- | ----------- |
| 90-100      | O     | 10          |
| 80-89       | A+    | 9           |
| 70-79       | A     | 8           |
| 60-69       | B+    | 7           |
| 50-59       | B     | 6           |
| 40-49       | C     | 5           |
| Below 40    | F     | 0           |

---

 🧾 Subjects and Credits

Sem 1:

* PPS 1 (4 credits)
* BEM (4 credits)
* BEE (3 credits)
* AP (3 credits)
* EG (3 credits)

 Sem 2:

* PPS 2 (4 credits)
* MVC (4 credits)
* DM (4 credits)
* SD (4 credits)
* EC (3 credits)
* ENG (2 credits)

---

💡 How to Run

 🖥 Requirements:

* A C compiler (e.g., GCC)

 🔧 Compilation:
gcc ResultAnalysisSystem.c -o student_result_system



 ▶️ Run the program:
./ResultAnalysisSystem



📌 Menu Options

1. Sem 1 results – Enter and view subject marks, grades, GPA, and CGPA
2. Sem 2 results – Similar to Sem 1
3. First Year results – Combined data from both semesters
4. Exit – Ends the program

---

🧑‍🎓 Sample Student Data

| Name   | Branch | Roll No |
| ------ | ------ | ------- |
| SAKETH | CSE    | GCTCA1  |
| UDAY   | CSE    | GCTCA2  |
| MANISH | CSE    | GCTCA3  |
| ...    | ...    | ...     |

(Predefined in the source code)

---

 📂 File Structure

```
ResultAnalysisSystem.c   --> Main source code file
README.md                 --> Project documentation (this file)
```

---

✍️ Author

Project by:\[K.Manish Kumar /]
Institution: Geethanjali College of Engineering and Technology

---

📜 License

This project is for academic and educational purposes only.


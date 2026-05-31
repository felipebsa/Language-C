# Learning C / C++

Repository with exercises and practical lessons from the 1st semester of the Systems Development course at EtecVAW - Vasco Antonio Vechiarutti.

---

## 📁 Structure

```
Linguagem-C/
├── aula01~06/   → C language lessons
└── C++/
    ├── L1/      → Exercise list 1 (loops, conditions, logic)
    └── L2/      → Exercise list 2 (functions, vectors, algorithms)
```

---

## 📚 C Lessons

| Folder | Content | Topics |
|--------|---------|--------|
| `aula01/` | Basic concepts | variables, `float`, `if/else if`, `scanf`, `printf` |
| `aula02/` | Loop syntax | nested `for`, decrement, increment, pattern logic |
| `aula03/` | Arrays and strings | `int[]`, `char[]`, `fgets`, `strlen`, loops with arrays |
| `aula04/` | Functions | `float`, `void`, parameters, return, refactoring |
| `aula05/` | Pointers | `*`, `&`, memory address, pass by reference |
| `aula06/` | Structs | `typedef`, `struct`, array of structs, functions with structs |

---

## C++ Lists

### L1 — Loops, Conditions and Logic

| Exercise | Description |
|----------|-------------|
| ex01 | Check if a number is prime |
| ex02 | Display powers of 2 from 2⁰ to 2ⁿ |
| ex03 | Read numbers until negative, display sum |
| ex04 | Find the highest and lowest of 10 numbers |
| ex05 | Display multiples of a number up to a limit |
| ex06 | Read numbers until sum > 100, display product |
| ex07 | Calculate average height of N people |
| ex08 | Display sum of even and odd numbers up to N |
| ex09 | Fibonacci sequence up to a number (50–100) |
| ex10 | Guessing game with random number |

### L2 — Functions and Vectors

| Exercise | Description |
|----------|-------------|
| ex01 | Sum of odd numbers up to N using function |
| ex02 | Power calculation using loop and function |
| ex03 | Ideal weight by gender using functions |
| ex04 | Calculator with functions for each operation |
| ex05 | Palindrome checker using function |
| ex06 | Day of week from number using switch |
| ex07 | Check if 5 numbers are sorted (asc/desc/none) |
| ex08 | Sum of areas of 5 circles using function |
| ex09 | Replace vowels with * in a word |
| ex10 | Count vowels and consonants in a name |
| ex11 | Replace negatives with zero in a vector |
| ex12 | Count even and odd numbers in a vector |
| ex13 | Count occurrences of a letter in a vector |
| ex14 | Sort names descending, display ascending |
| ex15 | Find index of first negative number |
| ex16 | Find index of highest and lowest value |
| ex17 | Inverted vector, sum of positives from both |
| ex18 | Count each vowel in a vector of 20 chars |
| ex19 | Separate even/odd, sort, sum into third vector |
| ex20 | Find the third smallest value in a vector |

---

## How to run

```bash
# C files
gcc aula01/BMI_calculator.c -o programa
./programa

# C++ files
g++ C++/L2/ex01/main.cpp -o main
./main
```

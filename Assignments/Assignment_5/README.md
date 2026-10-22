# Logic Building - Assignment 5

**Author:** Arvind Madhav Baile  
**Date:** 22/10/2026

## Programs

1. `program5_1.c` — Find the greatest of three integers, including equal values.
2. `program5_2.c` — Check whether a year is a Gregorian leap year; non-positive years are invalid.
3. `program5_3.c` — Display a student's grade based on marks out of 100.
4. `program5_4.c` — Check divisibility by 3 and 5.
5. `program5_5.c` — Identify uppercase letters, lowercase letters, digits, or special characters.

## Compile and run

Compile a program with GCC, for example:

```bash
gcc program5_1.c -o program5_1
./program5_1
```

Repeat with the desired source filename.

## Note

The supplied character-type snippet contained an incomplete, duplicated `else if` condition before the digit check. It has been corrected to the valid condition `cValue >= '0' && cValue <= '9'`.

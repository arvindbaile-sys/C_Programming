# Logic Building Assignment 3

**Author:** Arvind Madhav Baile  
**Date:** 22/10/2026  
**Language:** C

## Programs
1. `program3_1.c` — Print the first N even numbers.
2. `program3_2.c` — Print proper factors of a number (excluding the number itself).
3. `program3_3.c` — Print even proper factors of a number.
4. `program3_4.c` — Convert the case of an English alphabet character.
5. `program3_5.c` — Check whether a character is a vowel.

## Compile and run on Ubuntu
```bash
gcc program3_1.c -o program3_1 && ./program3_1
gcc program3_2.c -o program3_2 && ./program3_2
gcc program3_3.c -o program3_3 && ./program3_3
gcc program3_4.c -o program3_4 && ./program3_4
gcc program3_5.c -o program3_5 && ./program3_5
```

## Notes
- For Program 2, input `24` prints `1 2 3 4 6 8 12`; this is the complete set of proper factors. The sample output `1 2 4 6 8 12` omits `3`.
- For Program 3, input `36` prints `2 4 6 12 18`; these are the even proper factors. The sample output in the supplied text omits `4`.
- For character input, `scanf(" %c", ...)` skips whitespace before reading the character.

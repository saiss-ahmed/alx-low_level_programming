# README FOR 0x02-functions_nested_loops

## Learning Objectives:
- ### What are nested loops and how to use them
- ### What is a function and how do you use functions
- ### What is the difference between a declaration and a definition of a function
- ### What is a prototype
- ### Scope of variables
- ### What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
## this repository contain :

#### - [0. _putchar](https://github.com/saiss-ahmed/alx-low_level_programming/blob/main/0x02-functions_nested_loops/0-putchar.c)
 - a program that prints single character, followed by a new line.
#### - [1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](https://github.com/saiss-ahmed/alx-low_level_programming/blob/main/0x02-functions_nested_loops/1-alphabet.c)
 - a function that prints the alphabet, in lowercase, followed by a new line.
#### - [2. 10 x alphabet](https://github.com/saiss-ahmed/alx-low_level_programming/blob/main/0x02-functions_nested_loops/2-print_alphabet_x10.c)
 - a function that prints 10 times the alphabet, in lowercase, followed by a new line.
    - #### Prototype: void print_alphabet(void);
#### - [3. islower]()
 - a function that checks for lowercase character.
     - #### Prototype: int _islower(int c);
     - Returns 1 if c is lowercase
     - Returns 0 otherwise
#### - [4. isalpha](https://github.com/saiss-ahmed/alx-low_level_programming/blob/main/0x02-functions_nested_loops/4-isalpha.c)
 - a function that checks for alphabetic character.
    - #### Prototype: int _isalpha(int c);
    - Returns 1 if c is a letter, lowercase or uppercase
    - Returns 0 otherwise

#### - [5. Sign](https://github.com/saiss-ahmed/alx-low_level_programming/blob/main/0x02-functions_nested_loops/5-sign.c)
 -  a function that prints the sign of a number.

    - #### Prototype: int print_sign(int n);
    - Returns 1 and prints + if n is greater than zero
    - Returns 0 and prints 0 if n is zero
    - Returns -1 and prints - if n is less than zero
#### - [6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you](https://github.com/saiss-ahmed/alx-low_level_programming/blob/main/0x02-functions_nested_loops/6-abs.c)
 - a function that computes the absolute value of an integer.

    - #### Prototype: int _abs(int);
#### - [7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important](https://github.com/saiss-ahmed/alx-low_level_programming/blob/main/0x02-functions_nested_loops/7-print_last_digit.c)
 - a function that prints the last digit of a number.

    - #### Prototype: int print_last_digit(int);
    - Returns the value of the last digit
#### - [8. I'm federal agent Jack Bauer, and today is the longest day of my life](https://github.com/saiss-ahmed/alx-low_level_programming/blob/main/0x02-functions_nested_loops/8-24_hours.c)
 -  a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.7
     - #### Prototype: void jack_bauer(void);
#### - [9. Learn your times table](https://github.com/saiss-ahmed/alx-low_level_programming/blob/main/0x02-functions_nested_loops/9-times_table.c)
 -  a function that prints the 9 times table, starting with 0.
    - #### Prototype: void times_table(void);
#### - [10. a + b](https://github.com/saiss-ahmed/alx-low_level_programming/blob/main/0x02-functions_nested_loops/10-add.c)
 -  a function that adds two integers and returns the result.
    - #### Prototype: int add(int, int);
#### - [11. 98 Battery Street, the OG](https://github.com/saiss-ahmed/alx-low_level_programming/blob/main/0x02-functions_nested_loops/11-print_to_98.c)
 -  a function that prints all natural numbers from n to 98, followed by a new line.
    -   #### Prototype: void print_to_98(int n);
    -   Numbers must be separated by a comma, followed by a space
    -   Numbers should be printed in order
    -   The first printed number should be the number passed to your function
    -   The last printed number should be 98
#### - [12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself](https://github.com/saiss-ahmed/alx-low_level_programming/blob/main/0x02-functions_nested_loops/100-times_table.c)
 - a function that prints the n times table, starting with 0.

     - #### Prototype: void print_times_table(int n);
    - If n is greater than 15 or less than 0 the function should not print anything
#### - [13. Nature made the natural numbers; All else is the work of women](https://github.com/saiss-ahmed/alx-low_level_programming/blob/main/0x02-functions_nested_loops/101-natural.c)
-  a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
#### - [14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A](https://github.com/saiss-ahmed/alx-low_level_programming/blob/main/0x02-functions_nested_loops/103-fibonacci.c)
- a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.

    - The numbers must be separated by comma, followed by a space , 
#### - [15. Even Liber Abbaci](https://github.com/saiss-ahmed/alx-low_level_programming/blob/main/0x02-functions_nested_loops/103-fibonacci.c)
-  program that finds and prints the sum of the even-valued terms, followed by a new line.

#### - [16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+](https://github.com/saiss-ahmed/alx-low_level_programming/blob/main/0x02-functions_nested_loops/104-fibonacci.c)
-   a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.

    - The numbers should be separated by comma, followed by a space ,

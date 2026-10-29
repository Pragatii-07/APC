# Arbitrary Precision Calculator (APC) in C

## Project Description

The Arbitrary Precision Calculator (APC) is a command-line calculator developed using the C programming language. It performs arithmetic operations on large integers that may exceed the storage limits of standard integer data types.

The project uses a **Doubly Linked List (DLL)** to store each digit of a number in a separate node and performs calculations digit by digit.

## Features

- **Addition:** Adds large integers using carry handling.
- **Subtraction:** Subtracts large integers using borrow handling.
- **Multiplication:** Multiplies large integers using partial products.
- **Division:** Calculates the integer quotient.
- **Modulus:** Calculates the remainder after division.
- **Large Integer Support:** Handles numbers beyond the range of standard C integer data types, subject to available memory and implementation limits.
- **Command-Line Input:** Accepts numbers and arithmetic operators through command-line arguments.
- **Modular Code Structure:** Organizes arithmetic operations and helper functions into separate source files.
- **Memory Management:** Uses dynamic memory allocation for linked-list nodes.

## Technologies Used

- **Programming Language:** C
- **Data Structure:** Doubly Linked List
- **Concepts:** Pointers, structures, dynamic memory allocation, string handling, command-line arguments, and modular programming
- **Compiler:** GCC
- **Build Tool:** Makefile
- **Development Environment:** Linux / Ubuntu

## Project Structure

```text
APC/
├── main.c
├── apc.h
├── operation.c
├── addition.c
├── subtraction.c
├── multiplication.c
├── division.c
├── modulus.c
├── makefile
└── README.md
```

## How It Works

1. The program accepts two integer operands and an arithmetic operator through command-line arguments.
2. It validates the input and converts the numbers into Doubly Linked Lists.
3. Each digit is stored in a separate node.
4. The program selects the required arithmetic operation.
5. The operation is performed using digit-based arithmetic algorithms.
6. The result is stored in a linked list and displayed on the terminal.


## Learning Outcomes

- Gained practical understanding of Doubly Linked Lists.
- Practiced pointers, structures, and dynamic memory allocation in C.
- Learned to implement arithmetic operations using digit-by-digit calculations.
- Improved understanding of modular programming and multi-file compilation.
- Practiced command-line argument handling and Makefile-based builds.

## Future Improvements

- Optimize the division algorithm for better performance.
- Improve error handling for invalid inputs and memory allocation failures.
- Expand automated testing for arithmetic edge cases.
- Add a more user-friendly interface.

```


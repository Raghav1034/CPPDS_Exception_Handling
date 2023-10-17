# CPPDS_Exception_Handling
# C++ Exception Handling

This repository contains examples and explanations of exception handling in C++. Exception handling is a mechanism that allows you to gracefully handle errors and unexpected conditions in your code. This README provides an overview of how to work with exception handling in C++.

## Table of Contents
- [Exception Handling](#exception-handling)
  - [Try-Catch Blocks](#try-catch-blocks)
  - [Throwing Exceptions](#throwing-exceptions)
  - [Standard Exception Classes](#standard-exception-classes)
- [Algorithm](#algorithm)
- [Output](#output)

## Exception Handling

### Try-Catch Blocks

In C++, exception handling is done using `try-catch` blocks. The `try` block encloses the code that may throw an exception, and the `catch` block handles the exception if one is thrown.

```cpp
try {
    // Code that may throw an exception
} catch (ExceptionType e) {
    // Code to handle the exception
}
```

### Throwing Exceptions

To throw an exception, you can use the `throw` keyword followed by an exception object or value.

```cpp
if (errorCondition) {
    throw MyException("An error occurred");
}
```

### Standard Exception Classes

C++ provides a set of standard exception classes in the `<stdexcept>` header, such as `std::runtime_error`, `std::invalid_argument`, and `std::out_of_range`. You can use these classes to handle common types of exceptions.

```cpp
#include <stdexcept>

void divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");
    }
    // Perform the division
}
```

## Algorithm

### Division with Exception Handling Algorithm

1. Start
2. Declare integer variables `a`, `b`, and `c`.
3. Display a prompt to the user: "Enter 2 numbers:".
4. Read two integer values `a` and `b` from the user.
5. Start a `try` block to handle exceptions.
6. Check if `b` is not equal to zero:
   - If `b` is not zero, proceed to the next step.
   - If `b` is zero, throw an exception with the value of `b`.
7. Calculate the division of `a` by `b` and store the result in `c`.
8. Display the result of the division: "Division = `c`".
9. End the `try` block.
10. If an exception of type `int` is thrown (i.e., when `b` is zero), catch the exception:
    - Display a message indicating the error: "Divide by `b` error," where `b` is the value of `b`.
11. End the `catch` block.
12. End the program by returning 0.
13. End.

### Eligibility Check based on Age with Exception Handling Algorithm

1. Start
2. Declare an integer variable `a`.
3. Display a prompt to the user: "Enter age".
4. Read an integer value `a` from the user.
5. Start a `try` block to handle exceptions.
6. Check if `a` is greater than or equal to 18:
   - If `a` is greater than or equal to 18, proceed to the next step.
   - If `a` is less than 18, throw an exception with the value of `a`.
7. Display a message indicating eligibility: "Eligible `a`," where `a` is the value of `a`.
8. End the `try` block.
9. If an exception of type `int` is thrown (i.e., when `a` is less than 18), catch the exception:
    - Display a message indicating ineligibility: "Not Eligible `a` error," where `a` is the value of `a`.
10. End the `catch` block.
11. End the program by returning 0.
12. End.

## Output

### Division with Exception Handling 
![image](https://github.com/Pranav18062004/Cpp-Exception-Handling/assets/79793482/dd1f811e-c321-4eb1-9f1a-284ee7440944)


### Eligibility Check based on Age with Exception Handling
![image](https://github.com/Pranav18062004/Cpp-Exception-Handling/assets/79793482/d7bd4d78-aea8-4519-b94c-1ca616b1a4a1)


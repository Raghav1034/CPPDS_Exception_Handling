# C++ Code Examples

This repository contains C++ code examples that demonstrate exception handling in C++. Below is a code snippet for an example that illustrates exception handling with different catch blocks and a description of the code.

## Example: Exception Handling with Multiple Catch Blocks

### Description
This code snippet demonstrates C++ exception handling with different catch blocks based on the value of an input number `i`. The program prompts the user to enter a value for `i`, and based on its value, different exceptions are thrown and caught.

### Code
```cpp
#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Enter i: ";
    cin >> i;

    try {
        if (i > 20) {
            cout << "Entered number is more than 20" << endl;
        } else if (i > 15) {
            throw i;
        } else {
            throw "Number less than 15";
        }
        cout << "Code which won't generate an exception" << endl;
        // Any code here will not be executed if an exception occurs
    } catch (int x) {
        cout << "Exception occurred for i = " << i << endl;
    } catch (char* message) {
        cout << message << endl;
    } catch (...) {
        cout << "Default exception handling" << endl;
    }

    return 0;
}


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



# C++ Code Examples

This repository contains two C++ code examples that demonstrate exception handling and the use of constructors and destructors in C++. Below are descriptions and code snippets for each example.

## Example 1: Exception Handling

### Description
This example demonstrates C++ exception handling. It asks the user to enter two numbers and performs division. If the second number is 0, it throws a `runtime_error` exception, which is then caught and handled.

### Code
```cpp
#include <iostream>
using namespace std;

int main() {
    int i, j;
    cout << "Enter i: ";
    cin >> i;
    cout << "Enter j: ";
    cin >> j;

    try {
        if (j == 0) {
            throw runtime_error("Division by 0");
        }
        int x = i / j;
        cout << "x = " << x << endl;
    } catch (exception &e) {
        cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}



### Eligibility Check based on Age with Exception Handling
![image](https://github.com/Pranav18062004/Cpp-Exception-Handling/assets/79793482/d7bd4d78-aea8-4519-b94c-1ca616b1a4a1)


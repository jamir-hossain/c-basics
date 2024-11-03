# Learn Basics of C Programming

## Format Specifiers

In the context of `printf` and `scanf`, format specifiers (or modifiers) are used to indicate the type of data being read or printed. Here's a breakdown of the common format specifiers used with `printf` and `scanf` for various data types and their modifiers:

### Integer Types

- **`%d` or `%i`:** Used for `int`. Reads or prints a signed integer.
- **`%u`:** Used for `unsigned int`. Reads or prints an unsigned integer.
- **`%hd`:** Used for `short int`. Reads or prints a signed short integer.
- **`%hu`:** Used for `unsigned short int`. Reads or prints an unsigned short integer.
- **`%ld`:** Used for `long int`. Reads or prints a signed long integer.
- **`%lu`:** Used for `unsigned long int`. Reads or prints an unsigned long integer.
- **`%lld`:** Used for `long long int`. Reads or prints a signed long long integer.
- **`%llu`:** Used for `unsigned long long int`. Reads or prints an unsigned long long integer.

### Floating-Point Types

- **`%f`:** Used for `float`. Reads or prints a floating-point number.
- **`%lf`:** Used for `double`. Reads or prints a double-precision floating-point number.
- **`%Lf`:** Used for `long double`. Reads or prints an extended precision floating-point number.

### Character Types

- **`%c`:** Used for `char`. Reads or prints a single character.
- **`%s`:** Used for `char[]` (string). Reads or prints a string of characters.

### Other Specifiers

- **`%x` or `%X`:** Used for `unsigned int`. Reads or prints an unsigned integer in hexadecimal format.
- **`%o`:** Used for `unsigned int`. Reads or prints an unsigned integer in octal format.
- **`%p`:** Used for pointers. Prints a pointer address.
- **`%%`:** Prints a literal `%` character.

### Example Usage:

```c
#include <stdio.h>

int main()
{
   int a;
   unsigned int b;
   float c;
   double d;
   char e;
   char str[100];

   // Reading input
   printf("Enter an integer: ");
   scanf("%d", &a);

   printf("Enter an unsigned integer: ");
   scanf("%u", &b);

   printf("Enter a float: ");
   scanf("%f", &c);

   printf("Enter a double: ");
   scanf("%lf", &d);

   printf("Enter a character: ");
   scanf(" %c", &e); // Note the space before %c to consume any leftover newline

   printf("Enter a string: ");
   scanf("%s", str);

   // Printing output
   printf("Integer: %d\n", a);
   printf("Unsigned Integer: %u\n", b);
   printf("Float: %.2f\n", c);
   printf("Double: %.2lf\n", d);
   printf("Character: %c\n", e);
   printf("String: %s\n", str);

   return 0;
}
```

## Data Types Overview

This program demonstrates various data types in C, including their sizes and ranges.

### 1. Integer (`int`)

- **Size**: 4 bytes
- **Range**: -2,147,483,648 to 2,147,483,647

### 2. Floating-point (`float`)

- **Size**: 4 bytes
- **Range**: Approximately 1.2E-38 to 3.4E+38

### 3. Double (`double`)

- **Size**: 8 bytes
- **Range**: Approximately 2.2E-308 to 1.8E+308

### 4. Character (`char`)

- **Size**: 1 byte
- **Range**: -128 to 127 (ASCII values)

### 5. Boolean (using `int`)

- **Size**: 4 bytes
- **Range**: 0 (false) or 1 (true)

### 6. Short Integer (`short`)

- **Size**: 2 bytes
- **Range**: -32,768 to 32,767

### 7. Long Integer (`long`)

- **Size**: 8 bytes (on most platforms, depending on the compiler and system architecture)
- **Range**: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

### 8. Unsigned Integer (`unsigned int`)

- **Size**: 4 bytes
- **Range**: 0 to 4,294,967,295

#### Code Example:

```c
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
   // Integer data type
   int integerVar = 42;
   printf("Integer: %d\n", integerVar);

   // Floating-point data type
   float floatVar = 3.14f;
   printf("Float: %.2f\n", floatVar);

   // Double data type
   double doubleVar = 2.718281828459;
   printf("Double: %.12lf\n", doubleVar);

   // Character data type
   char charVar = 'A';
   printf("Character: %c\n", charVar);

   // Boolean data type (using int)
   int boolVar = 1; // 1 for true, 0 for false
   printf("Boolean (as int): %d\n", boolVar);

   // Short integer data type
   short shortVar = 32767;
   printf("Short: %d\n", shortVar);

   // Long integer data type
   long longVar = 1234567890L;
   printf("Long: %ld\n", longVar);

   // Unsigned integer data type
   unsigned int unsignedVar = 4000000000U;
   printf("Unsigned Integer: %u\n", unsignedVar);

   return 0;
}
```

## Input and Output

In C, there are several functions for handling input and output, primarily in the `<stdio.h>` library:

- **`fgets`**:
  - Used to read a string that includes spaces, which allows the user to enter their full name. The function reads a line of text and stores it in the `name` array.
  - Example usage: `fgets(name, sizeof(name), stdin);`
- **`scanf`**:

  - Used to read integer and float inputs for `age` and `height`, which are then stored in their respective variables.
  - Example usage: `scanf("%d", &age);` and `scanf("%f", &height);`

- **`printf`**:
  - Used to display formatted output back to the user, including:
    - The user's name with `%s`
    - The user's age with `%d`
    - The user's height with `%.2f`, which limits the height output to two decimal places for clarity.

#### Code Example:

```c
#include <stdio.h>

int main()
{
   int age;
   float height;
   char name[50];

   // Asking for user input
   printf("Enter your name: ");
   fgets(name, sizeof(name), stdin); // reads a line of text
   printf("Enter your age: ");
   scanf("%d", &age);
   printf("Enter your height in meters (e.g., 1.75): ");
   scanf("%f", &height);

   // Displaying output
   printf("\nHello, %s", name); // fgets includes newline, so no need to add \n here
   printf("You are %d years old and %.2f meters tall.\n", age, height);

   return 0;
}
```

## Operators

### Arithmetic Operators

Arithmetic operators are used to perform basic mathematical operations such as addition, subtraction, multiplication, division, and modulus.

1. **Addition (`+`)**: Adds two numbers.
2. **Subtraction (`-`)**: Subtracts the second number from the first.
3. **Multiplication (`*`)**: Multiplies two numbers.
4. **Division (`/`)**: Divides the first number by the second, producing a quotient.
5. **Modulus (`%`)**: Finds the remainder when the first number is divided by the second (applicable to integers).

#### Code Example:

```c
#include <stdio.h>

int main()
{
   int num1, num2;

   // Prompt the user to enter two integers
   printf("Enter two integers: ");
   scanf("%d %d", &num1, &num2);

   // Perform arithmetic operations
   int sum = num1 + num2;        // Addition
   int difference = num1 - num2; // Subtraction
   int product = num1 * num2;    // Multiplication
   int quotient = num1 / num2;   // Division
   int remainder = num1 % num2;  // Modulus

   // Display the results
   printf("%d + %d = %d\n", num1, num2, sum);
   printf("%d - %d = %d\n", num1, num2, difference);
   printf("%d * %d = %d\n", num1, num2, product);
   printf("%d / %d = %d\n", num1, num2, quotient);
   printf("%d %% %d = %d\n", num1, num2, remainder);

   return 0;
}
```

### Assignment Operators

Assignment operators allow values to be assigned and modified in a single statement.

1. **`=`** : Assigns the value on the right to the variable on the left.
2. **`+=`** : Adds the right operand to the left operand and assigns the result to the left operand.
3. **`-=`** : Subtracts the right operand from the left operand and assigns the result to the left operand.
4. **`*=`** : Multiplies the left operand by the right operand and assigns the result to the left operand.
5. **`/=`** : Divides the left operand by the right operand and assigns the result to the left operand.
6. **`%=`** : Takes the modulus of the left operand by the right operand and assigns the result to the left operand.

#### Code Example:

```c
#include <stdio.h>

int main()
{
   int num1, num2;

   // Prompt the user to enter two integers
   printf("Enter two integers: ");
   scanf("%d %d", &num1, &num2);

   // Basic assignment
   int result = num1;
   printf("Initial result: %d\n", result);

   // Compound assignment operators

   // Equivalent to result = result + num2
   result += num2;
   printf("After += : %d\n", result);

   // Equivalent to result = result - num2
   result -= num2;
   printf("After -= : %d\n", result);

   // Equivalent to result = result * num2
   result *= num2;
   printf("After *= : %d\n", result);

   // Equivalent to result = result / num2
   result /= num2;
   printf("After /= : %d\n", result);

   // Equivalent to result = result % num2
   result %= num2;
   printf("After %%= : %d\n", result);

   return 0;
}
```

### Relational Operators

Relational operators are used to compare two values and return a boolean result (represented as `1` for true and `0` for false in C).

#### Code Example:

```c
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Relational operations
    int isEqual = (num1 == num2);
    int isNotEqual = (num1 != num2);
    int isGreater = (num1 > num2);
    int isLess = (num1 < num2);
    int isGreaterOrEqual = (num1 >= num2);
    int isLessOrEqual = (num1 <= num2);

    // Printing results
    printf("%d == %d: %d\n", num1, num2, isEqual);
    printf("%d != %d: %d\n", num1, num2, isNotEqual);
    printf("%d > %d: %d\n", num1, num2, isGreater);
    printf("%d < %d: %d\n", num1, num2, isLess);
    printf("%d >= %d: %d\n", num1, num2, isGreaterOrEqual);
    printf("%d <= %d: %d\n", num1, num2, isLessOrEqual);

    return 0;
}
```

### Logical Operators

Logical operators are used to combine or invert boolean expressions, allowing for complex conditions in decision-making processes.

#### Code Example:

```c
#include <stdio.h>

int main()
{
   int num1, num2;
   printf("Enter two integers: ");
   scanf("%d %d", &num1, &num2);

   int isEqual = (num1 == num2);
   int isGreater = (num1 > num2);

   // Logical operations
   int bothTrue = isEqual && isGreater;   // Logical AND
   int eitherTrue = isEqual || isGreater; // Logical OR
   int notEqual = !isEqual;               // Logical NOT

   // Printing results
   printf("(%d == %d) && (%d > %d): %d\n", num1, num2, num1, num2, bothTrue);
   printf("(%d == %d) || (%d > %d): %d\n", num1, num2, num1, num2, eitherTrue);
   printf("!(%d == %d): %d\n", num1, num2, notEqual);

   return 0;
}
```

## Conditional

conditional statements to execute different blocks of code based on specified conditions. These conditions can be evaluated using various constructs, such as `if`, `else if`, `else`, `switch`, and the ternary operator. Conditional programs allow for decision-making within the code, enabling different outcomes based on user input or variable values.

### If-Else

1. A conditional structure that executes different code blocks based on whether a condition is true or false.

2. Use when evaluating multiple conditions that may involve complex logical expressions or ranges.

### Switch-Case

2. A control structure that executes different code blocks based on the specific value of a variable or expression.
3. Use when dealing with a single variable that can take on multiple discrete values, making the code more readable for menu selections or similar scenarios.

#### Code Example:

```c
#include <stdio.h>

int main()
{
   int num1, num2;
   printf("Enter two integers: ");
   scanf("%d %d", &num1, &num2);

   // Using if-else to compare numbers
   if (num1 > num2)
   {
      printf("%d is greater than %d\n", num1, num2);
   }
   else if (num1 < num2)
   {
      printf("%d is less than %d\n", num1, num2);
   }
   else
   {
      printf("%d is equal to %d\n", num1, num2);
   }

   // Using switch to perform operations based on user choice
   int choice;
   printf("Choose an operation:\n");
   printf("1. Add\n");
   printf("2. Subtract\n");
   printf("3. Multiply\n");
   printf("4. Divide\n");
   printf("Enter your choice (1-4): ");
   scanf("%d", &choice);

   switch (choice)
   {
   case 1:
      printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
      break;
   case 2:
      printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
      break;
   case 3:
      printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
      break;
   case 4:
      if (num2 != 0)
      {
         printf("Result: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
      }
      else
      {
         printf("Error: Division by zero is not allowed.\n");
      }
      break;
   default:
      printf("Invalid choice.\n");
      break;
   }

   return 0;
}
```

## Ternary Operators

The ternary operator is a shorthand conditional operator that evaluates a boolean expression and returns one of two values based on whether the expression is true or false. It utilizes the ternary operator, a shorthand for `if-else`, to evaluate and assign the maximum and minimum values.

#### Code Example:

```c
#include <stdio.h>

int main()
{
   int num1, num2;
   printf("Enter two integers: ");
   scanf("%d %d", &num1, &num2);

   // Using the ternary operator to find the larger number
   int max = (num1 > num2) ? num1 : num2;

   // Using the ternary operator to find the smaller number
   int min = (num1 < num2) ? num1 : num2;

   printf("The larger number is: %d\n", max);
   printf("The smaller number is: %d\n", min);

   return 0;
}
```

## Loop

A **loop** in programming is a control structure that allows a block of code to be executed repeatedly based on a specified condition. Loops facilitate the automation of repetitive tasks by iterating through a sequence of instructions until a particular condition is met. Common types of loops include `for`, `while`, and `do-while`, each serving different use cases based on the nature of iteration required.

1. **For Loop**:

   - The `for` loop is used when the number of iterations is known beforehand. It consists of three parts: initialization, condition, and increment/decrement.

2. **While Loop**:

   - The `while` loop is used when the number of iterations is not known and should continue until a specific condition is met. The loop checks the condition before executing the body.

3. **Do-While Loop**:
   - The `do-while` loop guarantees that the loop body is executed at least once, as the condition is checked after the execution of the loop body.

#### Code Example:

```c
#include <stdio.h>

int main()
{
   // Use a for loop for a known number of iterations.
   printf("Using for loop:\n");
   for (int i = 1; i <= 10; i++)
   {
      printf("%d ", i);
   }
   printf("\n");

   // Use a while loop when the loop should continue until a condition changes.
   printf("Using while loop:\n");
   int j = 1;
   while (j <= 10)
   {
      printf("%d ", j);
      j++;
   }
   printf("\n");

   // Use a do-while loop when you need to execute the loop body at least once before checking the condition.
   printf("Using do-while loop:\n");
   int k = 1;
   do
   {
      printf("%d ", k);
      k++;
   } while (k <= 10);
   printf("\n");

   return 0;
}
```

## Array

An **array** is a collection of elements, all of the same data type, stored in contiguous memory locations. Arrays allow efficient storage and access of multiple values using a single variable name, accessed via indexing.

### Code Example

```c
int numbers[5] = {85, 90, 78, 92, 88}; // Declares an array of 5 integers
```

### How Arrays Work, Size of an Array

Arrays use contiguous memory blocks, where each element can be accessed with an index starting at `0`. The total size of an array depends on the data type and the number of elements it contains. For example, an `int` array with 5 elements requires `5 * sizeof(int)` bytes.

#### Code Example:

```c
#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    printf("Size of the array: %lu bytes\n", sizeof(numbers));
    printf("Number of elements: %lu\n", sizeof(numbers) / sizeof(numbers[0]));

    return 0;
}
```

### Array Initialization

An array can be initialized at the time of declaration, where values are assigned to the array elements directly. If the array size is specified, but fewer elements are provided, the remaining elements are initialized to `0`.

#### Code Example:

```c
#include <stdio.h>

int main() {
   int ages[5] = {18, 21, 25}; // Remaining elements are initialized to 0
   for (int i = 0; i < 5; i++) {
      printf("%d ", ages[i]); // Output: 18 21 25 0 0
   }

    return 0;
}
```

### Variable Length Arrays

Variable Length Arrays (VLAs) allow the size of the array to be determined at runtime instead of compile-time, introduced in C99. This flexibility is useful when the number of elements is only known during execution.

#### Code Example:

```c
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int values[n]; // VLA declaration
    for (int i = 0; i < n; i++) {
        values[i] = i * 2;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", values[i]);
    }

    return 0;
}
```

## String

A **string** in C is a sequence of characters terminated by a null character (`'\0'`). Strings are stored as arrays of characters, where the last character is always `'\0'` to indicate the end of the string.

#### Code Example

```c
char greeting[6] = "Hello"; // Declares a string with 5 characters and a null terminator
printf("Name: %s\n", greeting);
```

### String Input Output

To handle string input and output, we commonly use `scanf` and `printf`. However, `scanf` stops reading at whitespace, so `fgets` is often preferred for input to allow spaces within strings.

#### Code Example:

```c
#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Reads a line of text including spaces
    printf("Hello, %s", name);        // Outputs the entered name

    return 0;
}
```

### Finding Length of String

The `strlen` function, available in `<string.h>`, is used to find the length of a string. It counts characters until the null terminator, excluding it.

#### Code Example:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char word[100] = "Programming";
    int length = strlen(word);

    printf("Length of the string: %d\n", length); // Output: 11

    return 0;
}
```

### Copy Strings

The `strcpy` function, available in `<string.h>`, copies a source string to a destination string, including the null terminator. Ensure the destination has enough space to avoid overflow.

#### Code Example:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello";
    char destination[20];

    strcpy(destination, source);
    printf("Copied string: %s\n", destination); // Output: Hello

    return 0;
}
```

### Concatenating Two Strings

The `strcat` function, found in `<string.h>`, appends the contents of one string to the end of another. Make sure the destination has enough space to hold both strings.

#### Code Example:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char first[20] = "Hello, ";
    char second[] = "World!";

    strcat(first, second);
    printf("Concatenated string: %s\n", first); // Output: Hello, World!

    return 0;
}
```

### Comparing Two Strings

The `strcmp` function, provided by `<string.h>`, compares two strings lexicographically. It returns `0` if the strings are equal, a negative value if the first is less, and a positive value if the first is greater.

#### Code Example:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "banana";
    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("Strings are equal\n");
    } else if (result < 0) {
        printf("str1 is less than str2\n");
    } else {
        printf("str1 is greater than str2\n");
    }

    return 0;
}
```

## Function

Functions in C are reusable blocks of code designed to perform a specific task. They help in organizing code, reducing repetition, and making programs easier to read and maintain. Each function can be called multiple times within a program, which allows for efficient code reuse.

### Declaring and Using Functions

Functions in C need to be declared before they are used. A function declaration (or prototype) includes the function's return type, name, and parameters. The function definition provides the actual code to execute when the function is called.

#### Code Example:

```c
#include <stdio.h>

// Function declaration
void greet();

// Function definition
void greet() {
    printf("Hello from the greet function!\n");
}

int main() {
    // Calling the function
    greet();

    return 0;
}
```

### Function Parameters

Function parameters (or arguments) allow data to be passed to a function. Parameters are specified within the parentheses in the function declaration and definition. When calling the function, you provide values (arguments) for these parameters.

#### Code Example:

```c
#include <stdio.h>

// 'number' is a parameter
void displayNumber(int number) {
    printf("The number is: %d\n", number);
}

int main() {
    // Calling the function with argument 5
    displayNumber(5);

    return 0;
}
```

### Function Return Value

A function can return a value using the `return` statement. The return type of the function (like `int`, `float`, etc.) must match the type of value it returns. If a function doesn’t return a value, its return type is `void`.

#### Code Example:

```c
#include <stdio.h>

// Function with return type 'int'
int add(int a, int b) {
    return a + b;
}

int main() {
    // Calling the function and storing the return value
    int sum = add(3, 4);

    printf("Sum: %d\n", sum);

    return 0;
}
```

### Function Scopes

The scope of a variable defines where it can be accessed within a program. Variables declared inside a function are local to that function and can’t be accessed outside it. Global variables, declared outside of any function, are accessible throughout the program.

#### Code Example:

```c
#include <stdio.h>

int globalVar = 10; // Global variable

void display() {
    int localVar = 20; // Local variable
    printf("Global variable: %d\n", globalVar);
    printf("Local variable: %d\n", localVar);
}

int main() {
    // Can access both global and local variables in display function
    display();

    // Error: It wll show an error as localVar is not accessible here
    printf("%d", localVar);

    return 0;
}
```

## Pointer

A pointer is a variable that stores the memory address of another variable. Pointers allow direct access to memory and enable efficient manipulation of data by working with memory locations rather than copying data values. Pointers are essential for dynamic memory management and for passing large amounts of data efficiently in C.

#### Code Example:

```c
#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num; // 'ptr' is a pointer to 'num'

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", ptr); // prints the address stored in ptr
    printf("Value at address stored in ptr: %d\n", *ptr); // dereferencing pointer

    return 0;
}
```

### Working With Pointers

Working with pointers involves using the `&` operator to get the address of a variable and the `*` operator (dereference operator) to access the value stored at the address held by the pointer.

#### Code Example:

```c
#include <stdio.h>

void updateValue(int *ptr) {
    *ptr = 20; // modifies the value at the address stored in ptr
}

int main() {
    int num = 10;
    updateValue(&num); // passing the address of num
    printf("Updated value of num: %d\n", num);

    return 0;
}
```

### Pointer Arithmetic

Pointer arithmetic allows manipulation of pointers to navigate through arrays or memory. Incrementing a pointer `(ptr + 1)` moves it to the next element based on the data type size.

#### Code Example:

```c
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr; // points to the first element

    for (int i = 0; i < 4; i++) {
        printf("Value at arr[%d]: %d\n", i, *ptr);
        ptr++; // moves to the next element in the array
    }

    return 0;
}
```

### Pointers and Constants

Pointers can be declared as pointing to constant values or as constant pointers. This restricts modification either to the value being pointed to or the pointer itself.

- Pointer to Constant: `const int *ptr` means the pointer cannot change the value it points to.
- Constant Pointer: `int *const ptr` means the pointer cannot point to another address.

#### Code Example:

```c
#include <stdio.h>

int main() {
    int num1 = 10, num2 = 20;
    const int *ptr1 = &num1; // Pointer to constant
    int *const ptr2 = &num1; // Constant pointer

    // *ptr1 = 15; // Error: cannot modify the value
    ptr1 = &num2;  // Allowed: can change the address

    *ptr2 = 15;    // Allowed: can modify the value
    // ptr2 = &num2; // Error: cannot change the address

    return 0;
}
```

### Using Pointers to Pass by Address in Functions

Passing variables by address to a function enables the function to modify the actual value of the variable in the calling environment. This is useful when a function needs to return multiple values or modify a large data structure.

#### Code Example:

```c
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(&x, &y); // passing addresses of x and y
    printf("Swapped values: x = %d, y = %d\n", x, y);

    return 0;
}
```

### Null Pointers

A null pointer is a pointer that points to nothing (address 0). It is useful for indicating that the pointer is not currently pointing to any valid memory location.

#### Code Example:

```c
#include <stdio.h>

int main() {
    int *ptr = NULL; // null pointer

    if (ptr == NULL) {
        printf("Pointer is null, not pointing to any memory address.\n");
    } else {
        printf("Pointer value: %d\n", *ptr);
    }

    return 0;
}
```

## Title

#### Code Example:

```c

```

## Title

#### Code Example:

```c

```

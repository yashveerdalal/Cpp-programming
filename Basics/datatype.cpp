// In C++, data types are fundamental to defining the type of data that can be stored and manipulated within a program. Here's a rundown of the main data types in C++:

// # 1. Basic Data Types

// - Integer Types
//   - `int`: Standard integer type. Size is typically 4 bytes.
//   - `short`: Short integer. Typically 2 bytes.
//   - `long`: Long integer. Typically 4 bytes, but can be 8 bytes on some systems.
//   - `long long`: Extended long integer. At least 8 bytes.

// - Unsigned Variants
//   - `unsigned int`: Non-negative integers.
//   - `unsigned short`: Non-negative short integers.
//   - `unsigned long`: Non-negative long integers.
//   - `unsigned long long`: Non-negative extended long integers.

// - Character Types
//   - `char`: Represents a single character. Typically 1 byte.
//   - `signed char`: A character type that can be positive or negative.
//   - `unsigned char`: A character type that can only be non-negative.
//   - `wchar_t`: Wide character type, used for extended character sets. Size varies by implementation but often 2 or 4 bytes.

// - Floating-Point Types
//   - `float`: Single-precision floating-point number. Typically 4 bytes.
//   - `double`: Double-precision floating-point number. Typically 8 bytes.
//   - `long double`: Extended precision floating-point number. Size varies by implementation but often 12 or 16 bytes.

// # 2. Derived Data Types

// - Pointers
//   - Pointers are variables that store the address of another variable.

// - Arrays
//   - Arrays are collections of elements of the same type stored in contiguous memory locations.

// - References
//   - References are aliases for existing variables. They must be initialized when declared.

// - Functions
//   - Functions can return different types and can take arguments of various types.

// # 3. User-Defined Data Types

// - Structures (`struct`)
//   - Structures are used to group different data types together. Each member can be of different types.

// - Unions (`union`)
//   - Unions allow storing different data types in the same memory location. Only one member can be accessed at a time.

// - Enumerations (`enum`)
//   - Enumerations define a set of named integer constants.

// - Classes (`class`)
//   - Classes are a fundamental part of C++'s object-oriented programming. They encapsulate data and methods that operate on the data.

// ### 4. Type Modifiers**

// - `signed`: Specifies that a variable can hold both positive and negative values. This is the default for `int`.
// - `unsigned`: Specifies that a variable can hold only non-negative values.
// - `const`: Specifies that the value of the variable cannot be changed after initialization.
// - `volatile`: Specifies that a variable's value may be changed by something outside the control of the code section in which it appears.

// # 5. Type Aliases

// - `typedef`: Provides an alias for an existing type.
// - `using`: A modern alternative to `typedef` for creating type aliases.

// # 6. Type Traits and Utilities**

// - `std::size_t`: Represents sizes and is usually an unsigned integer type.
// - `std::ptrdiff_t`: Represents the difference between two pointers.

// Understanding these data types and their variants allows you to effectively manage and manipulate data in C++ programs.



#include<iostream>
using namespace std;
int main(){
   float x = 7;
    int y = 2;
    cout<<x/2<<endl;
   char grade;
   cout<<"enter the grade of your Friend ";
   cin>>grade;
   cout<<"your friend Received a grade of "<<grade<<" in math";

}


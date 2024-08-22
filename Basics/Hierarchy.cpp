// n C++, operators have a hierarchy known as operator precedence and associativity, which determines the order in which operators are evaluated in expressions. Here’s a breakdown of the hierarchy:

// 1. Highest Precedence
// Parentheses: ()
// Function Call Operator: ()
// Array Subscript Operator: []
// Member Access Operator (Direct): .
// Pointer to Member Operator (Direct): ->
// Type Casting: type()

// 2. Unary Operators
// Postfix Increment/Decrement: ++, -- (after a variable)
// Prefix Increment/Decrement: ++, -- (before a variable)
// Unary Plus/Minus: +, -
// Logical NOT: !
// Bitwise NOT: ~
// Address-of Operator: &
// Dereference Operator: *
// Type Casting: (type)
// Sizeof Operator: sizeof

// 3. Binary Arithmetic Operators
// Multiplication/Division/Modulus: *, /, %
// Addition/Subtraction: +, -
// 4. Binary Shift Operators
// Left Shift: <<
// Right Shift: >>

// 5. Relational Operators
// Less Than/Greater Than: <, >
// Less Than or Equal To/Greater Than or Equal To: <=, >=
// 6. Equality Operators
// Equal To/Not Equal To: ==, !=
// 7. Bitwise AND/OR/XOR Operators
// Bitwise AND: &
// Bitwise XOR: ^
// Bitwise OR: |

// 8. Logical AND/OR Operators
// Logical AND: &&
// Logical OR: ||

// 9. Conditional (Ternary) Operator
// Conditional: ? :

// 10. Assignment Operators
// Assignment: =
// Compound Assignments: +=, -=, *=, /=, %= etc.

// 11. Comma Operator
// Comma: ,

// 12. Member Access Operator (Indirect)
// Pointer to Member Operator (Indirect): ->*
// Member Access Operator (Direct): .

// 13. Scope Resolution Operator
// Scope Resolution: ::

// 14. Typeid Operator
// Typeid: typeid

// 15. New/Deletion Operators
// New: new, new[]
// Delete: delete, delete[]

// 16. Exception Handling Operators
// Throw: throw
// Try/Catch: try, catch
// Operator Associativity
// Left-to-Right: Most operators (e.g., +, -, *, /, &, |, etc.)
// Right-to-Left: Some operators (e.g., assignment operators =, conditional operator ?:, and unary operators like ++, --, etc.)



#include<iostream>
using namespace std;
int main(){
cout<<9+1*10; // will return the value as 19 and not 100
};

// and just for your kind knowledge the * and / has the same Precedence so just foll0w the rule of left to right 

// division multiplication and modules will act on the same priority list
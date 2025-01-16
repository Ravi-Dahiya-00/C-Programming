#include <stdio.h>

int main() {

    // 1. Arithmetic Operators
    // These are used for basic mathematical operations.
    int a = 10, b = 3;
    printf("Arithmetic Operators:\n");
    printf("Addition (a + b): %d\n", a + b);      // Adds a and b
    printf("Subtraction (a - b): %d\n", a - b);   // Subtracts b from a
    printf("Multiplication (a * b): %d\n", a * b); // Multiplies a and b
    printf("Division (a / b): %d\n", a / b);      // Divides a by b (integer division)
    printf("Modulus (a %% b): %d\n\n", a % b);    // Gives the remainder of a divided by b




    // 2. Relational Operators
    // These are used to compare two values and return true (1) or false (0).
    printf("Relational Operators:\n");
    printf("a == b: %d\n", a == b); // Checks if a is equal to b
    printf("a != b: %d\n", a != b); // Checks if a is not equal to b
    printf("a > b: %d\n", a > b);   // Checks if a is greater than b
    printf("a < b: %d\n", a < b);   // Checks if a is less than b
    printf("a >= b: %d\n", a >= b); // Checks if a is greater than or equal to b
    printf("a <= b: %d\n\n", a <= b); // Checks if a is less than or equal to b




    // 3. Logical Operators
    // These are used to combine or invert conditions.
    int x = 1, y = 0; // 1 means true, 0 means false
    printf("Logical Operators:\n");
    printf("x && y: %d\n", x && y); // Logical AND: true if both x and y are true             (return type of result is int)
    printf("x || y: %d\n", x || y); // Logical OR: true if either x or y is true
    printf("!x: %d\n\n", !x);       // Logical NOT: true if x is false, and vice versa




    // 4. Bitwise Operators
    // These operate at the bit level of the numbers.
    // bitwise operators in C programming language enable MANIPULATION OF DATA AT BINARY LEVEL , allowing for efficient bit-level programming.
    // these operators perform operations on individual bits , 0s and 1s , making them particularly useful in numerical computation for swift and resource-efficient calculation.
    // bitwise operations are often more efficient then conventional arithmetic operations , especially when dealing with LOW-LEVEL PROGRAMMING or RESOURCE-CONSTRAINED ENVIORNMENT.


    
// bitwise operators

// Bitwise operators are used to compare (binary) numbers:

        //    '''Operator	Name	                Description	                                                               Example	


        //    & 	AND	                              Sets each bit to 1 if both bits are 1                                    x & y	
        //                                     if one is zero then it will give zero.

        //     |	OR	                              Sets each bit to 1 if one of two bits is 1                    	         x | y	
        //                                         only give 0 when both are zero.

        //    ^	XOR	                              Sets each bit to 1 if only one of two bits is 1	                         x ^ y	
        //                                         it will give zero when both are 0 or 1 in same row

        //     ~	NOT(Compliment)                              	Inverts all the bits	                                       ~x	
        //                                                 0 to 1 and 1 to 0

        //     <<	Zero fill left shift          	  Shift left by pushing zeros in from the right and 
        //                                     let the leftmost bits fall off	                                         x << 2	

        //    >>	Signed right shift	          Shift right by pushing copies of the leftmost bit in from the left,
        //                                     and let the rightmost bits fall off                                       	x >> 2	'''


    printf("Bitwise Operators:\n");
    printf("a & b: %d\n", a & b);   // Bitwise AND: Compares each bit of a and b
    printf("a | b: %d\n", a | b);   // Bitwise OR: Compares each bit and sets to 1 if either bit is 1
    printf("a ^ b: %d\n", a ^ b);   // Bitwise XOR: Sets each bit to 1 if the corresponding bits are different
    printf("~a: %d\n", ~a);         // Bitwise Complement: Inverts all bits of a
    printf("a << 1: %d\n", a << 1); // Left shift: Shifts bits of a to the left by 1
    printf("a >> 1: %d\n\n", a >> 1); // Right shift: Shifts bits of a to the right by 1




//let's see how this print statement will be calculated.

//firstly this are converted into binary
//     a   =    0   1    0    1                #5 in binary form
//     b   =    0   1    0    0                #4 in binary form

//    a&b  =    0   1    0    0                a&b in binary form
// only the place where a and b are having 1 that will be written as 1
//  and where in only 1 is there that place is written 0 

// now convert this 0100 into decimal form 
//  8          4         2             1
//  0          1         0             0

// decimal form of this 0100 is 4.
//  so the output of the print(a&b) will be 4.


    // 5. Assignment Operators
    // These assign values to variables, with optional arithmetic.
    printf("Assignment Operators:\n");
    int c = 5; // Initial value
    printf("Initial value of c: %d\n", c);
    c += 3; // c = c + 3
    printf("After c += 3: %d\n", c);
    c -= 2; // c = c - 2
    printf("After c -= 2: %d\n", c);
    c *= 4; // c = c * 4
    printf("After c *= 4: %d\n", c);
    c /= 3; // c = c / 3
    printf("After c /= 3: %d\n", c);
    c %= 3; // c = c % 3
    printf("After c %%= 3: %d\n\n", c);




    // 6. Unary Operators
    // These operate on a single operand.
    int d = 7;
    printf("Unary Operators:\n");
    printf("Initial value of d: %d\n", d);
    printf("After d++ (post-increment): %d\n", d++); // Returns d, then increments
    printf("Value of d now: %d\n", d);
    printf("After ++d (pre-increment): %d\n", ++d); // Increments, then returns d
    printf("After d-- (post-decrement): %d\n", d--); // Returns d, then decrements
    printf("Value of d now: %d\n", d);
    printf("After --d (pre-decrement): %d\n\n", --d); // Decrements, then returns d




    // 7. Conditional (Ternary) Operator
    // Shorthand for if-else.
    printf("Ternary Operator:\n");
    int max = (a > b) ? a : b; // If a > b, max = a; otherwise, max = b
    printf("Max of a and b: %d\n\n", max);




    // 8. Special Operators
    // Includes sizeof and comma.
    printf("Special Operators:\n");
    printf("Size of int: %zu bytes\n", sizeof(int)); // Returns the size of int in bytes
    int e = (1, 2, 3); // Comma operator evaluates expressions from left to right; returns the last value
    printf("Value of e using comma operator: %d\n", e);

    return 0;
}

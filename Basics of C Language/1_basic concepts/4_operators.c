#include <stdio.h>

int main() {



// three types of operators :
// 1.Unary operator
// 2.Binary operator
// Ternary operator





    // 1.Unary Operator :
            // These operate on a single operand.

            // unary minus : -
            int unary_minus=34;
                unary_minus=-unary_minus;
                printf("\n unary minus did this : %d",unary_minus);
                
                int d = 7;
                printf("Unary Operators:\n");
                printf("Initial value of d: %d\n", d); 
                printf("After d++ (post-increment): %d\n", d++); // Returns d, then increments

                int a1=10,b1=11;
                a1=b1++;
                printf("\nnow value : %d",a1);     // this will give 11 because first value is assigned to a1 of b1 then b1 has increment of 1
                printf("\nsome_different_case : %d",b1);          
                
                printf("\nValue of d now: %d\n", d);
                printf("After ++d (pre-increment): %d\n", ++d); // Increments, then returns d
                printf("After d-- (post-decrement): %d\n", d--); // Returns d, then decrements
                printf("Value of d now: %d\n", d);
                printf("After --d (pre-decrement): %d\n\n", --d); // Decrements, then returns d


                // post --> first it will do its work it can be assigning,operations or anything only after this it will do increment or decrement.          first line will be executed then increment or decrement will happen.

                // pre -->  first increment or decrement then line will be executed .










                // Logical Operators
                    // These are used to combine or invert conditions.
                    int x = 1, y = 0; // 1 means true, 0 means false
                    printf("Logical Operators:\n");
                    printf("x && y: %d\n", x && y); // Logical AND: true if both x and y are true             (return type of result is int)
                    printf("x || y: %d\n", x || y); // Logical OR: true if either x or y is true
                    printf("!x: %d\n\n", !x);       // Logical NOT: true if x is false, and vice versa





                
                // address of (&)
                // it retrieves the address of any operand.


                // sizeof 
                // it will give memory size in bits of any data type or of any variable.
















// Binary Operators :


                    // 1. Arithmetic Operators
                    // These are used for basic mathematical operations.
                    int a = 5, b = 4;
                    printf("Arithmetic Operators:\n");
                    printf("Addition (a + b): %d\n", a + b);      // Adds a and b
                    printf("Subtraction (a - b): %d\n", a - b);   // Subtracts b from a
                    printf("Multiplication (a * b): %d\n", a * b); // Multiplies a and b
                    printf("Division (a / b): %d\n", a / b);      // Divides a by b (integer division)
                    printf("Modulus (a %% b): %d\n\n", a % b);    // Gives the remainder of a divided by b
                    // %% in the format string tells printf to print a literal %.

                    // modulo operator can only be used with integer values not with floating values.
                    // the sign it will give in answer it will be of first operand.
                    

                    // operator precedence -->  * / %   
                                            // + -              and these are given priorities acc to question left to right.

                    
                    //  Relational Operators
                    // These are used to compare two values and return true (1) or false (0).
                    printf("Relational Operators:\n");
                    printf("a == b: %d\n", a == b); // Checks if a is equal to b
                    printf("a != b: %d\n", a != b); // Checks if a is not equal to b
                    printf("a > b: %d\n", a > b);   // Checks if a is greater than b
                    printf("a < b: %d\n", a < b);   // Checks if a is less than b
                    printf("a >= b: %d\n", a >= b); // Checks if a is greater than or equal to b
                    printf("a <= b: %d\n\n", a <= b); // Checks if a is less than or equal to b







                //  Assignment Operators
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




   












//number conversion binary to decimal and vice-versa


// decimal number is having base = 10   ex=(123)10

// binary number is having base = 2     ex=(123)2



// formula
//    N...........16        8          4             2            1



// we have to write this series of this formula upto when the digits of the binary number is not finished.
// we have to ignore all the numbers of the series which is getting 0 under this series.
// we have to take all the numbers of series of only one.
// then take all the numbers of the series which is getting one.
// now sum all the numbers of the series which are above one.


// binary to decimal

// convert 1101010 to decimal 

//  (1101010)2=  ()10



// now solve this 

//   1            1              0          1            0               1                 0
//   64           32             16         8            4               2                 1


// now forget all the numbers of series which are getting zero above it.
// take all the numbers of series of one and sum all the numbers.

//   64+32+8+2=106 
// the decimal of 1101010 is 106.











// decimal to binary.

// convert 16 to binary


//     16            8            4             2              1
//     1             0            0             0              0

// binary of 16 is 10000




// convert 19 to binary


//     16             8              4                2                1
//      1             0              0                1                1

// binary of 19 is 10011

// we have to put one on those numbers that can make the sum equal to that number which we are converting to binary.


















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
    printf("a << 1: %d\n", a << 1); // Left shift: Shifts bits of a to the left by 1
    printf("a >> 1: %d\n\n", a >> 1); // Right shift: Shifts bits of a to the right by 1






    printf("a & b: %d\n", a & b);   // Bitwise AND: Compares each bit of a and b


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















    printf("a | b: %d\n", a | b);   // Bitwise OR: Compares each bit and sets to 1 if either bit is 1


//firstly this are converted into binary
//    a   =    0   1    0    1                #5 in binary form
//     b   =    0   1    0    0                #4 in binary form

//    a|b  =    0   1    0    1                a|b in binary form
//if only place is having 1 then it will be written as zero
//zero will be return only when there are both zeroes in same line

//now convert this 0101 into decimal form 
// 8          4         2             1
//0          1         0             1

//decimal form if this 0101 will be 5
//so the output of the print(a|b) will be 5.
    











//3. XOR bitwise operator
    printf("a ^ b: %d\n", a ^ b);   // Bitwise XOR: Sets each bit to 1 if the corresponding bits are different


//let's see how this print statement will be calculated.

//firstly this are converted into binary
//     a   =    0   1    0    1                #5 in binary form
//     b   =    0   1    0    0                #4 in binary form

//    a^b  =    0   0    0    1                a^b in binary form
//it will give one only when both bits are different in same row.
//gives zero when both are same bits 
//now convert this 0001 into decimal form 
// 8          4         2             1
// 0          0         0             1

//decimal form if this 0001 will be 1
//so the output of the print(a^b) will be 1.
















//4. NOT(compliment) bitwise operator
    printf("~a: %d\n", ~a);         // Bitwise Complement: Inverts all bits of a

//let's see how this print statement will be calculated.

//   5    =   0     1        0          1
//  ~5    =   1     0        1          0

// 2's = 1's + 1   (2's is compliment of 2)
//2's because 6 in binary form is written as          0    1     1     0
//1's in binary form will be written as               1    0     0     1
//one will also be added because 1 is also is 2's                      1
                                            
//this is - 6 stored in binary form                   1   0      1      0




//short trick is that always add 1 in a and put - sign this will be NOT of that a.
// a=8
// print(-8)   #this will give -9.






     
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

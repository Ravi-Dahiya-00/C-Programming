#include <stdio.h>

int main()
{
//     Summary of Precedence
//              Operator	            Precedence (High → Low)           	Associativity
//               sizeof	                  Highest	                         Right-to-left
//            Unary (+, -)	               High	                             Right-to-left
//            *, /, %                 	   Higher	                         Left-to-right
//            +, -	                       Medium                        	Left-to-right
//         <, >, <=, >=	                   Lower                        	Left-to-right
//         &&	                           Lower than relational        	Left-to-right
//              `	                                                      	`
//         =	                           Lowest (Assignment)           	Right-to-left
//          , (Comma)	                   Lowest                       	Left-to-right




// associativity is used according to the question a*b/c    first / then * because its associativity is from left to right and precedence of both * / is same .

// precedence is priority and associativity is order 


    int a = 5, b = 10, c = 15, result;

    // Demonstrating sizeof (Highest precedence)
    printf("sizeof(a) = %zu\n", sizeof(a));

    // Unary operators (+, -) with right-to-left associativity
    printf("-a = %d, +b = %d\n", -a, +b);

    // Multiplicative (*, /, %) with left-to-right associativity
    result = a * b / c % a;
    printf("a * b / c %% a = %d\n", result);

    // Additive (+, -) with left-to-right associativity
    result = a + b - c;
    printf("a + b - c = %d\n", result);

    // Relational (<, >, <=, >=) with left-to-right associativity
    result = (a < b) > (c <= a);
    printf("(a < b) > (c <= a) = %d\n", result);

    // Logical AND (&&) with left-to-right associativity
    result = (a < b) && (b > c);
    printf("(a < b) && (b > c) = %d\n", result);

    // Logical OR (||) with left-to-right associativity
    result = (a < b) || (b > c);
    printf("(a < b) || (b > c) = %d\n", result);

    // Assignment (=) with right-to-left associativity
    result = a = b = c = 100;
    printf("a = b = c = 100; result = %d, a = %d, b = %d, c = %d\n", result, a, b, c);

    // Bitwise AND, OR with precedence
    a = 5, b = 3, c = 7;
    result = a | b & c; // & has higher precedence than |
    printf("a | b & c = %d\n", result);

    // Conditional/Ternary Operator with right-to-left associativity
    result = (a > b) ? a : b;
    printf("(a > b) ? a : b = %d\n", result);

    // Comma operator with left-to-right associativity
    result = (a = 1, b = 2, c = 3, a + b + c);
    printf("(a = 1, b = 2, c = 3, a + b + c) = %d\n", result);

    return 0;

    
}

 
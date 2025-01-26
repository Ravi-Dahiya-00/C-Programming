#include <stdio.h>

int main()
{

// Data Types :
                // Data types specifies the type of data that a variable can store such as integer,float,character, etc.


                    // three types of data type :
                            // 1. Primitive Data Type
                            // 2. Derived  Data type
                            // 3. User Defined Data type
                    
// 1. Primitive (or Basic) Data Types
// These are the fundamental data types built into the language. They are used to store simple values like integers, characters, and floating-point numbers.

// Examples in C:
// Integer Types: int, short, long, long long
// Floating-Point Types: float, double, long double
// Character Type: char
//   void 








// 2. Derived Data Types
// Derived types are built from the basic data types and are used to store collections of data or more complex structures.

// Examples in C:
        // 1. Arrays: A collection of elements of the same type.
        int arr[5]; // An array of integers.
        
        // 2. Pointers: Used to store the address of another variable.
        int *ptr; // Pointer to an integer.

        // 3. Functions: A block of code that performs a specific task
        // int add(int a, int b) { return a + b; }






//   3. User-Defined Data Types
// These types are defined by the programmer and are not built into the language. They allow for more complex and customized data structures.

//     Examples in C:
// 1. Structures (struct): Used to group different data types into one unit.
struct Student {
    int id;
    char name[50];
    float marks;
};

// 2. Unions (union): Similar to structures, but all members share the same memory location.
    union Data {
    int i;
    float f;
};

// 3. Enumerations (enum): Used to define a set of named integer constants.
enum Color { RED, GREEN, BLUE };


// 4.Typedef (typedef): Used to create new names for existing data types.
typedef unsigned int uint;















// Data Types : 
    
    // 1. Integer :
                // integer types are capable of storing negative,zero, as well as positive values without decimals.
                    // examples : -25 , 0 , 23 etc.
    // represented by keyword    --->  int.

    // int takes about 2bytes of the storage space in 32bit type and 4 bytes in 64bit type operating system respectively.

    int integer_example;


    // int with 4bytes can store value in range from         -2,147,483,648  to  +2,147,483,647

    // int with 2bytes can store value in range from         -32,768  to  +32,767 (for signed integer) --> by default

    
    // if we specify unsigned int then no negative number only positive
    // range -->   0 to 65535


    unsigned int totalApples = 15023456; // Number of apples in stock
    unsigned int applesSold = 45;  // Number of apples sold
    unsigned int applesRemaining;  // Number of apples left in stock

    // Calculate remaining apples
    applesRemaining = totalApples - applesSold;

    // Print the result
    printf("Total Apples: %u\n", totalApples);
    printf("Apples Sold: %u\n", applesSold);
    printf("Apples Remaining: %u\n", applesRemaining);





    // 2. Floating POint :
                        // we use floating point data for storing the decimal values into a variable in a C program.

                        // two different types :
                                // 1.double                   2. Float
                            
                        float float_example;
                        double double_example;

        
            // FLOAT:
                    // used to store decimal numbers (numbers with floating point values) with single precision.


                    // Range  -->     1.2E-38 to 3.4E+38


                    float_example=12.05;

            
            // DOUBLE:
                    // used to store decimal numbers (numbers with floating point values) with Double precision.

                    // double data type is basically a precision sort of data type that is capable of holding 64bits of decimal number or floating points.

                
                // since double has more precision then float so that it will occupies twice the memory occupied by the floating-point type.

                // Range -->  1.7E-308 to 1.7E+308

                // size -->  8 bytes

                double double_example1=1234523.1231232;

            









    // 3. Character :
            // character data types allow its variable to store only a single character.
            // the size of character is 1byte.
            // most basic data type in C.
            // it store a single character and it requires a single byte of memory in all most compilers.
            // Range -->  ( -128 to 127 ) --> for signed
            //  ( 0 to 255 )  --> for unsigned
            // size --> 1byte
            
            char char_example='a';
            printf("%c",char_example);
            printf("%c",98);     // print b because it is the ascii value of b


    


    // 4. Void :
                // void data type is used to specify that no value is present.
                // it does not provide a result value to its caller.
                // it has no value and no operations.
                // it is used to represent nothing.
                // it is used in multiple ways as function return type , function argument as void , and pointers to void.


                // function return type
                void exit(int check);

                // function without any parameters can accept void.
                int print(void);

                // memory allocation function which returns a pointer to void.
                void*malloc(size_t size);


 
    




    
//   size of a tells how much a memory a data type or a variable takes 

// how much bytes is this variable or data type is taking 
    // this memory taken depends on the compiler it can differ with different compilers.
    
    int a12;
    printf("\n variable takes memory of --> %d",sizeof(a12));
    printf("\n int takes memory of --> %d",sizeof(int));


    long int a123;
    printf("\n long int variable takes memory of --> %d",sizeof(a123));

    printf("\n float takes memory of --> %d",sizeof(float));

    printf("\n double takes memory of --> %d",sizeof(double));

    printf("\n char takes memory of --> %d",sizeof(char));

    printf("\n long long int takes memory of --> %d",sizeof(long long int));

    printf("\n short takes memory of --> %d",sizeof(short));





    return 0;
}

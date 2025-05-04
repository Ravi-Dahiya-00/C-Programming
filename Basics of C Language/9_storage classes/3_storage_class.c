// register asks the compiler to store the variable in CPU registers (instead of normal RAM memory) for faster access. 🚀
// Registers are tiny memory units inside the CPU which are super fast compared to RAM.
// You use register when you need very fast access to variables (like in loops).


// ✅ Important:
// It is just a request to the compiler — the compiler may or may not store it in a register (depending on availability).

#include <stdio.h>

int main() {
    register int i;  // Suggest compiler to keep 'i' in CPU register

    for (i = 0; i < 5; i++) {
        printf("%d ", i);
    }



// register int x;
// printf("%p", &x);  // ❌ ERROR! You cannot get address of register variables


// Use register for variables that are used very frequently (like loop counters) and you want maximum speed.



    return 0;
}



// Feature                    |                       Description

// Storage                    |                      CPU register (if possible)
// Speed                      |                      Very fast access
// Lifetime                   |                      Till the function/block exists
// Scope                      |                      Local to the block or function
// Cannot take address        |                      &i (address of register variable) is NOT allowed

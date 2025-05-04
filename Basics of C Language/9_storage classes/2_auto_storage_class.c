// auto means automatic.
// By default, all local variables (inside functions or blocks) are auto even if you don't write auto.
// Memory is created when the function is called and destroyed after the function ends.
// Scope: only inside the block {} where it is declared.

// ✅ So usually we don’t write auto explicitly, because it’s default.



#include <stdio.h>

int main() {
    auto int num = 10;  // 'auto' is optional here
    int anotherNum = 20;  // This is also 'auto' by default

    printf("Value of num: %d\n", num);
    printf("Value of anotherNum: %d\n", anotherNum);

    {
        auto int num=20;
        auto int innerNum = 30; // auto inside a block
        printf("Value of innerNum: %d\n", innerNum);
        printf("Value of Num inside the block: %d\n", num);
    }

    // printf("%d", innerNum);  // ❌ Error: innerNum is not accessible outside

    return 0;
}


// Storage	Memory is allocated on stack.
// Lifetime	Created when function starts, destroyed when function ends.
// Default	All local variables are auto by default.
// Scope	Only inside the block or function where declared.



// auto keyword exists but is rarely written today.
// All local variables you declare are auto unless you specify otherwise (static, register, etc.).

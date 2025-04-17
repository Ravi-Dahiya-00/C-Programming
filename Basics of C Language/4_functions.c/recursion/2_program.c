#include <stdio.h>

void recursiveFunction(int count) {
    if (count == 0) return; // base case
    printf("Count: %d\n", count);
    recursiveFunction(count - 1); // recursive call
}

int main() {
    recursiveFunction(5);
    return 0;
}

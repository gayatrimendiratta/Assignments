#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};  // Array of size 5
     arr[57]=75;
    // Trying to access an index out of bounds
    printf("Value at arr: %d\n", arr[90]);  // This is an overflow!

    return 0;
}


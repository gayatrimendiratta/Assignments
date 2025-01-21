
#include <stdio.h>
#define BITS 32

int main() {
    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);

   
    for (int i = BITS - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");

    // Check if the number is negative or positive using two's complement representation
    if (num < 0) {
        printf("The number is in two's complement representation.\n");
    } else {
        printf("The number is positive or zero.\n");
    }

    return 0;
}
